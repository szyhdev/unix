#include "apue.h"
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

void creat_hole_file()
{
    int fd;

    if ((fd = creat("0302_file.hole", FILE_MODE)) < 0) {
        err_sys("creat error");
    }

    if (write(fd, buf1, 10) != 10) {
        err_sys("buf1 write error");
    }
    /* offset now = 10 */

    if (lseek(fd, 16384, SEEK_SET) == -1) {
        err_sys("lseek error");
    }
    /* offset now = 16384 */

    if (write(fd, buf2, 10) != 10) {
        err_sys("buf2 write error");
    }
    /* offset now = 16394 */
}

void creat_nohole_file()
{
    int fd;

    if ((fd = creat("0302_file.nohole", FILE_MODE)) < 0) {
        err_sys("creat error");
    }

    if (write(fd, buf1, 10) != 10) {
        err_sys("buf1 write error");
    }
    /* offset now = 10 */

    int i = 10;
    for (; i < 16384; i++) {
        if (write(fd, "a", 1) != 1) {
            err_sys("buf1 write error");
        }
    }
    /* offset now = 16384 */

    if (write(fd, buf2, 10) != 10) {
        err_sys("buf2 write error");
    }
    /* offset now = 16394 */
}

int main(void)
{
    creat_hole_file();
    creat_nohole_file();

    exit(0);
}
