#include "apue.h"
#include <fcntl.h>

char *file_name = "0416_tempfile";

int main(void)
{
    int fd;

    if ((fd = open(file_name, O_RDWR | O_CREAT)) < 0) {
        err_sys("open error");
    }

    int i = 0;
    for (; i < 1024 * 1024; i++) {
        if (write(fd, "a", 1) != 1) {
            err_sys("write error");
        }
    }

    if (unlink(file_name) < 0) {
        err_sys("unlink error");
    }
    printf("file unlinked\n");

    sleep(15);
    printf("done\n");

    exit(0);
}
