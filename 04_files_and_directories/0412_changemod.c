#include "apue.h"

int main(void)
{
    struct stat statbuf;

    /* turn on set-group-ID and turn off group-execute */
    if (stat("0409_foo", &statbuf) < 0) {
        err_sys("stat error for foo");
    }

    if (chmod("0409_foo", (statbuf.st_mode & ~S_IXGRP) | S_ISGID) < 0) {
        err_sys("chmod error for 0409_foo");
    }

    /* set absolute mode to "rw-r--r--" */
    if (chmod("0409_bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0) {
        err_sys("chmod error for 0409_bar");
    }

    exit(0);
}
