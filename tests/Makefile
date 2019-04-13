SRCS = $(wildcard */*.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) -c -o $@.o $<
