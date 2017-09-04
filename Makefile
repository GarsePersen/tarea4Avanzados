FLAGS= -g -Wall -std=c99

all: Main

Main:  grafo.o Main.o
	gcc $(FLAGS) grafo.o Main.o -o Main

grafo.o: grafo.h grafo.c
	gcc $(FLAGS) -c grafo.c -o grafo.o

clean:
	rm -f *.o lab_1.exe lab_1
