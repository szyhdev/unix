#include "apue.h"

int main(void)
{
    long *lbuf = NULL;
    if ((lbuf = calloc(100, sizeof(long))) != NULL) {
        int i;
        for (i = 0; i < 100; i++) {
            if (lbuf[i] != 0) {
                printf("Non-zero found\n");
                break;
            }
        }
        free(lbuf);
    }

    long **plbuf = NULL;
    if ((plbuf = calloc(100, sizeof(long *))) != NULL) {
        int i;
        for (i = 0; i < 100; i++) {
            if (plbuf[i] != NULL) {
                printf("Non-zero pointer found\n");
                break;
            }
            plbuf[i] = &lbuf[i];
        }
        free(plbuf);
    }

    return 0;
}
