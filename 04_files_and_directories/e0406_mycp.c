#include "apue.h"
#include <fcntl.h>

#define	BUFFSIZE  1

int main(int argc, char *argv[])
{
    if (argc != 3) {
        err_quit("usage: e0406_mycp <source_file> <destination_file>");
    }

    int src_fd;
    if ((src_fd = open(argv[1], O_RDONLY)) < 0) {
        err_ret("open error for %s", argv[1]);
    }

    int dest_fd;
    if ((dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, FILE_MODE)) < 0) {
        err_ret("open error for %s", argv[2]);
    }

    int n;
    char buf[BUFFSIZE] = { 0 };
    char zero[BUFFSIZE] = { 0 };
    while ((n = read(src_fd, buf, BUFFSIZE)) > 0) {
        if (memcmp(buf, zero, n) == 0) {
            if (lseek(dest_fd, n, SEEK_CUR) == -1) {
                err_sys("cannot seek");
            }
        } else {
            if (write(dest_fd, buf, n) != n) {
                err_sys("write error");
            }
        }
    }

    if (n < 0) {
        err_sys("read error");
    }

    exit(0);
}
