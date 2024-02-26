#include "apue.h"
#include <fcntl.h>

char buf[] = "abcdefghij";
char *file_name = "e0306_append.dat";

int main(void)
{
    int fd;
    if ((fd = open(file_name, O_CREAT | O_RDWR | O_APPEND, FILE_MODE)) < 0) {
        err_sys("open error");
    }

    if (write(fd, buf, 10) != 10) {
        err_sys("buf write error");
    }

    char ch;
    int i = 0;
    for (; i < 10; ++i) {
        lseek(fd, i, SEEK_SET);
        read(fd, &ch, 1);
        printf("%c", ch);
        write(fd, "a", 1);
    }
    printf("\n");
    write(fd, "\n", 1);

    exit(0);
}
