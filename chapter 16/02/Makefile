inventory: inventory.o readline.o sort.o
	gcc -o inventory inventory.o readline.o sort.o

inventory.o: inventory.c readline.h sort.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c

sort.o: sort.c sort.h
	gcc -c sort.c