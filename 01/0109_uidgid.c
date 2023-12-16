#include "apue.h"

int main(void)
{
    printf("uid = %lu, gid = %lu\n", (unsigned long)getuid(), (unsigned long)getgid());

    exit(0);
}
