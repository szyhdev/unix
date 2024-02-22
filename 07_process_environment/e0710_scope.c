#include "apue.h"

void f2()
{
    char name[64] = { 0 };
    snprintf(name, 64, "ubuntu 22.04");
    printf("%s\n", name);
}

int f1(int val)
{
    int num = 0;
    int *ptr = &num;

    /* use gcc compile option -O to ensure the error shows up */
    if (val == 0) {
        int val;
        val = 5;
        ptr = &val;
    }

    f2();

    return(*ptr + 1);
}

int main(void)
{
    printf("%d\n" , f1(0));

    return 0;
}
