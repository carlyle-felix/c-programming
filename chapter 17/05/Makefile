sort: sort.o readline.o stringsort.o
	gcc -o sort sort.o readline.o stringsort.o

sort.o: sort.c readline.h stringsort.h
	gcc -c sort.c

readline.o: readline.c readline.h
	gcc -c readline.c
	
stringsort.o: stringsort.c stringsort.h
	gcc -c stringsort.c
