#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void)
{
    time_t t = INT_MAX;  /* or LONG_MAX */
    struct tm *tmp;
    char buf[64] = { 0 };

    printf("%lu, %ld\n", sizeof(int), t);
    /* printf("%lu, %ld\n", sizeof(long int), t); */

    tmp = localtime(&t);
    if (strftime(buf, 64, "time and date: %r, %a %b %d, %Y", tmp) == 0) {
        printf("buffer length 64 is too small\n");
    } else {
        printf("%s\n", buf);
    }

    exit(0);
}
