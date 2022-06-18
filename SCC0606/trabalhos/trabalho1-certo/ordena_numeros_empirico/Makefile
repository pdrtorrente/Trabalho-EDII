all : main.o ordena_digitos.o lista.o
	gcc -o prog.exe ordena_digitos.o ordena_digitos.h lista.o lista.h main.o

run :
	./prog.exe

main.o : main.c
	gcc -o main.o -c main.c

lista.o : lista.c lista.h
	gcc -o lista.o -c lista.c

ordena_digitos.o : ordena_digitos.c ordena_digitos.h
	gcc -o ordena_digitos.o -c ordena_digitos.c

clean :
	-del -f *.exe *.o