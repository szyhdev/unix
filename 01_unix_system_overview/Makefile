ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)

include $(ROOT)/Make.defines.$(PLATFORM)
include $(ROOT)/Make.libapue.inc

EXES =	0103_ls1 0104_mycat 0105_getcputc 0106_hello 0107_shell1 \
		0108_testerror 0109_uidgid 0110_shell2

all:	$(EXES)

$(EXES):%:%.c $(LIBAPUE)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(EXES) $(TEMPFILES)
