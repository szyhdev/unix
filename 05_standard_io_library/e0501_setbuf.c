#include "apue.h"

void setbuf(FILE *fp, char *buf)
{
    if (buf == NULL) {
        if (setvbuf(fp, buf, _IONBF, BUFSIZ) != 0) {
            err_sys("setvbuf error");
        }
    } else {
        if (setvbuf(fp, buf, _IOFBF, BUFSIZ) != 0) {
            err_sys("setvbuf error");
        }
    }
}
