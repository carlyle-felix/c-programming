nestingcheck: nestingcheck.o stack.o
	gcc -o nestingcheck nestingcheck.o stack.o

nestingcheck.o: nestingcheck.c stack.h
	gcc -c nestingcheck.c

stack.o: stack.c stack.h
	gcc -c stack.c