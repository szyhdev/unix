#include "apue.h"
#include <setjmp.h>

#define TOK_ADD  5

void do_line(char *);
void cmd_add(void);
int get_token(void);

jmp_buf	jmpbuffer;

int main(void)
{
    char line[MAXLINE];

    if (setjmp(jmpbuffer) != 0) {
        printf("error\n");
    }

    while (fgets(line, MAXLINE, stdin) != NULL) {
        do_line(line);
    }

    exit(0);
}

char *tok_ptr;  /* global pointer for get_token() */

void do_line(char *ptr)  /* process one line of input */
{
    int cmd;

    tok_ptr = ptr;
    while ((cmd = get_token()) > 0) {
        switch (cmd) {  /* one case for each command */
        case TOK_ADD:
            cmd_add();
            break;
        }
    }
}

void cmd_add(void)
{
    int token;

    token = get_token();

    /* added by yh */
    if (token > 0) {
        printf("valid command\n");
    } else {
        printf("invalid command\n");
        get_token();  /* call it to make token_flag == 0 before long jumping */
        longjmp(jmpbuffer, 1);
    }
    /* rest of processing for this command */
}

int get_token(void)
{
    /* fetch next token from line pointed to by tok_ptr */

    /* added by yh */
    /* begin */
    static int token_flag = 0;
    static int command_flag = 0;

    token_flag++;

    if (token_flag == 1) {
        return TOK_ADD;
    }

    if (token_flag == 2) {
        return (command_flag = 1 - command_flag);
    }

    token_flag = 0;

    return 0;
    /* end */
}
