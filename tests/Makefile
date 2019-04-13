SRCS = $(wildcard 1/*.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) -c -o $@.o $<
