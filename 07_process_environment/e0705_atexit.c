#include "apue.h"

typedef void (ExitFunc)(void);

static void	my_exit1(void);
static void	my_exit2(void);

int main(void)
{
    ExitFunc *ef1 = my_exit1;
    ExitFunc *ef2 = my_exit2;

    if (atexit(ef2) != 0) {
        err_sys("can't register my_exit2");
    }

    if (atexit(ef1) != 0) {
        err_sys("can't register my_exit1");
    }

    if (atexit(ef1) != 0) {
        err_sys("can't register my_exit1");
    }

    printf("main is done\n");

    return(0);
}

static void my_exit1(void)
{
    printf("first exit handler\n");
}

static void my_exit2(void)
{
    printf("second exit handler\n");
}
