P=bsq
OBJECTS=map_utils.o map_solve.o map_funcs.o components.o map_read.o parse.o
CFLAGS=-Wall -Werror -Wextra
LDLIBS=
CC=cc

all: run

run: $(P)
	clear
	./$< ./example.map

$(P): $(OBJECTS)

$(T) : $(OBJECTS) test.o

norm:
	clear
	norminette

fclean: clean
	rm $(P) a.out

clean:
	rm $(OBJECTS)

test:
	./test.sh 10 10 1
