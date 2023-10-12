#!/bin/sh
testbsq() {
	W=$(($RANDOM % 25 + 10))
	H=$(($RANDOM % 25 + 10))
	./genmap.pl $@ > test.map
	clear
	./bsq test.map
}

make
while true
do
	testbsq $@
	sleep 1
done
