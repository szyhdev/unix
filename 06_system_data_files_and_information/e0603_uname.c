#include "apue.h"
#include <sys/utsname.h>

int main(void)
{
    struct utsname name;

    if ((uname(&name)) == -1) {
        err_sys("uname error");
    }
    printf("sysname = %s\n", name.sysname);
    printf("nodename = %s\n", name.nodename);
    printf("release = %s\n", name.release);
    printf("version = %s\n", name.version);
    printf("machine = %s\n", name.machine);

    exit(0);
}
