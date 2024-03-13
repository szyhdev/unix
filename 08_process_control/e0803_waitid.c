#include "apue.h"
#include <sys/wait.h>
#include <errno.h>

const char *get_sigstr(int signo)
{
    switch (signo) {
        case SIGCHLD:
            return "SIGCHLD";
        case SIGABRT:
            return "SIGABRT";
        case SIGFPE:
            return "SIGFPE";
        default:
            return "";
    }
}

void pr_siginfo(siginfo_t *pinfo)
{
    if (pinfo->si_code == CLD_EXITED) {
        printf("normal termination, exit status = %d\n", pinfo->si_status);
    } else if (pinfo->si_code == CLD_DUMPED) {
        printf("abnormal termination, signal number = %d (core file generated) [FROM %s]\n",
                pinfo->si_status, get_sigstr(pinfo->si_signo));
    }
}

int main(void)
{
    pid_t pid;
    siginfo_t info;

    if ((pid = fork()) < 0) {
        err_sys("fork error");
    } else if (pid == 0) {  /* child */
        exit(7);
    }

    if (waitid(P_PID, pid, &info, WEXITED | WSTOPPED | WCONTINUED) != 0) {  /* wait for child */
        err_sys("wait error");
    }
    pr_siginfo(&info);      /* and print its status */

    if ((pid = fork()) < 0) {
        err_sys("fork error");
    } else if (pid == 0) {  /* child */
        abort();            /* generates SIGABRT */
    }

    if (waitid(P_PID, pid, &info, WEXITED | WSTOPPED | WCONTINUED) != 0) {  /* wait for child */
        err_sys("wait error");
    }
    pr_siginfo(&info);      /* and print its status */

    if ((pid = fork()) < 0) {
        err_sys("fork error");
    } else if (pid == 0) {  /* child */
        int x = 0;
        return rand() / x;  /* divide by 0 generates SIGFPE */
    }

    if (waitid(P_PID, pid, &info, WEXITED | WSTOPPED | WCONTINUED) != 0) {  /* wait for child */
        err_sys("wait error");
    }
    pr_siginfo(&info);      /* and print its status */

    exit(0);
}
