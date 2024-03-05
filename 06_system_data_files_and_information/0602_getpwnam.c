#include "apue.h"
#include <pwd.h>

struct passwd *getpwnam(const char *name)
{
    struct passwd  *ptr;

    setpwent();
    while ((ptr = getpwent()) != NULL) {
        if (strcmp(name, ptr->pw_name) == 0) {
            printf("found a match\n");
            break;  /* found a match */
        }
    }
    endpwent();

    return(ptr);    /* ptr is NULL if no match found */
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        err_quit("usage: 0602_getpwnam <login_name>");
    }

    getpwnam(argv[1]);

    exit(0);
}
