ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)

include $(ROOT)/Make.defines.$(PLATFORM)
include $(ROOT)/Make.libapue.inc

EXES =	0214_conf 0219_options

OBJS =	e0203_openmax.o

all:	$(EXES) $(OBJS)

$(EXES):	$(LIBAPUE)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

$(OBJS):%.o:%.c
		$(CC) $(CFLAGS) -c $^

0214_conf:	0214_conf.c

0214_conf.c:	0213_makeconf.awk 0211_sysconf.sym 0212_pathconf.sym
	$(AWK) -f 0213_makeconf.awk >0214_conf.c

0211_sysconf.sym:	0211_sysconf-lim.sym
	grep -v "^#" 0211_sysconf-lim.sym >0211_sysconf.sym

0212_pathconf.sym:	0212_pathconf-lim.sym
	grep -v "^#" 0212_pathconf-lim.sym >0212_pathconf.sym

0219_options:	0219_options.c

0219_options.c:	0219_makeopt.awk 0219_sysopt.sym 0218_pathopt.sym
	$(AWK) -f 0219_makeopt.awk >0219_options.c

0219_sysopt.sym:	0219_sysconf-opt.sym
	grep -v "^#" 0219_sysconf-opt.sym >0219_sysopt.sym

0218_pathopt.sym:	0218_pathconf-opt.sym
	grep -v "^#" 0218_pathconf-opt.sym >0218_pathopt.sym

clean:
	rm -f $(EXES) $(OBJS) $(TEMPFILES) 0214_conf.c 0219_options.c \
		0212_pathconf.sym 0218_pathopt.sym 0211_sysconf.sym 0219_sysopt.sym
