#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>

bool is_valid_fd(int fd, int *errnum)
{
    int olderrno = errno;  /* save old errno */

    /* clear errno before calling dup() */
    if (errno == EBADF) {
        errno = 0;
    }

    /* check if fd is valid */
    int newfd = dup(fd);
    if ((newfd != -1) || (errno != EBADF)) {  /* succeeded or failed with errors other than EBADF */
        close(newfd);
        errno = olderrno;
        return true;
    } else {                                  /* failed with error of EBADF */
        errno = *errnum = EBADF;
        return false;
    }
}

int dup_checked(int fd, int *errnum)
{
    int olderrno = errno;  /* save old errno */

    /* duplicate fd to fd2 */
    int fd2 = dup(fd);
    if (fd2 == -1) {
        *errnum = errno;
    }

    errno = olderrno;  /* restore to old errno */

    return fd2;
}

int mydup2_impl(int fd, int fd2, int *errnum)
{
    int res = -1;

    /* close fd2 at first */
    close(fd2);

    /* allocate fd set */
    int index = 0;
    int *fdset = (int *)calloc(fd2 + 1, sizeof(int));
    printf("duplicate fd till it equals to 20: \n  ");
    for (; index < (fd2 + 1); ++index) {
        fdset[index] = dup_checked(fd, errnum);
        printf("%d ", fdset[index]);
        if (fdset[index] == -1) {
            break;
        } else if (fdset[index] == fd2) {
            res = fd2;
            break;
        }
    }
    printf("\n");

    /* close duplicated fd(s) except of 20 */
    printf("close duplicated fd(s) except of 20: \n  ");
    int i = 0;
    for (; i < index; ++i) {
        printf("%d ", fdset[i]);
        close(fdset[i]);
    }
    printf("\n");

    /* release fd set */
    free(fdset);

    return res;
}

int mydup2(int fd, int fd2)
{
    int res = -1;
    int myerrno = errno;  /* save old errno */

    /* check if fd and fd2 are in valid range */
    int tblsize = getdtablesize();
    if ((fd < 0) || (fd >= tblsize) ||
            (fd2 < 0) || (fd2 >= tblsize)) {
        myerrno = EBADF;
        goto exit_mydup2;
    }

    /* check if fd is valid */
    if (!is_valid_fd(fd, &myerrno)) {
        goto exit_mydup2;
    }

    /* directly return fd if fd2 equals to fd */
    if (fd == fd2) {
        res = fd;
        goto exit_mydup2;
    }

    /* duplicate fd to fd2 */
    res = mydup2_impl(fd, fd2, &myerrno);

exit_mydup2:
    errno = myerrno;  /* restore to old errno */

    return res;
}

int main()
{
    int fd = 20;
    char *data1 = "write to original stdout (fd == 1)\n";
    char *data2 = "write to duplicated stdout (fd == 20)\n";

    mydup2(STDOUT_FILENO, fd);

    write(STDOUT_FILENO, data1, strlen(data1));
    write(fd, data2, strlen(data2));

    exit(0);
}
