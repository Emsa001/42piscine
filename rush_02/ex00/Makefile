CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS := $(wildcard ./*.c ./*/*.c)

OUTPUT = ./rush-02

all: build

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(OUTPUT)

fclean:
	rm -f $(OUTPUT)

install:
	cp $(OUTPUT) /usr/local/bin

run:
	$(OUTPUT)

test:
	$(OUTPUT) 123456789
