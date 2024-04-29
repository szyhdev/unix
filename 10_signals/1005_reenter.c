#include "apue.h"
#include <pwd.h>

static void my_alarm(int signo)
{
    struct passwd *rootptr;

    printf("entering signal handler\n");
    if ((rootptr = getpwnam("root")) == NULL) {
        err_sys("getpwnam(root) error");
    }
    printf("calling alarm()...\n");
    alarm(1);
    printf("leaving signal handler\n");
}

int main(void)
{
    struct passwd *ptr;

    signal(SIGALRM, my_alarm);
    alarm(1);
    for (;;) {
        if ((ptr = getpwnam("daemon")) == NULL) {
            err_sys("getpwnam error");
        }
        if (strcmp(ptr->pw_name, "daemon") != 0) {
            printf("return value corrupted!, pw_name = %s\n", ptr->pw_name);
        }
    }
}
