g := ./contagens

all : main.o contagem_leituras.o ctrlF.o contagem_intersecoes.o ordena_digitos.o
	gcc -g -Wall -o prog.exe ordena_digitos.o ordena_digitos.h contagem_leituras.o ctrlF.o contagem_intersecoes.o contagem_leituras.h ctrlF.h contagem_intersecoes.h main.o

run :
	./prog.exe

main.o : main.c
	gcc -g -Wall -o main.o -c main.c

contagem_leituras.o : contagem_leituras.c
	gcc -g -Wall -o contagem_leituras.o -c contagem_leituras.c

contagem_intersecoes.o : contagem_intersecoes.c contagem_intersecoes.h
	gcc -g -Wall -o contagem_intersecoes.o -c contagem_intersecoes.c

ctrlF.o : ctrlF.c ctrlF.h
	gcc -g -Wall -o ctrlF.o -c ctrlF.c

ordena_digitos.o : ordena_digitos.c ordena_digitos.h
	gcc -g -Wall -o ordena_digitos.o -c ordena_digitos.c

clean :
	-del -f *.exe *.o arquivo_pos_fragmentos.csv
