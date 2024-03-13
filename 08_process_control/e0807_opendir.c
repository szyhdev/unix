#include "apue.h"
#include <dirent.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    DIR *dp;

    if (argc != 2) {
        err_quit("usage: ls <directory_name>");
    }

    if ((dp = opendir(argv[1])) == NULL) {
        err_sys("can't open %s", argv[1]);
    }

    int dfd = dirfd(dp);
    int flag = fcntl(dfd, F_GETFD);
    closedir(dp);
    if (flag == -1) {
        err_sys("fcntl error (directory)");
    }
    printf("%s (opendir): close_on_exec = %s\n", argv[1], (flag & FD_CLOEXEC) ? "ON" : "OFF");

    int ffd = open(argv[1], O_RDONLY);
    if (ffd == -1) {
        err_sys("can't open %s", argv[1]);
    }
    flag = fcntl(ffd, F_GETFD);
    close(ffd);
    if (flag == -1) {
        err_sys("fcntl error (file)");
    }
    printf("%s (open)   : close_on_exec = %s\n", argv[1], (flag & FD_CLOEXEC) ? "ON" : "OFF");

    exit(0);
}
