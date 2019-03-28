all: prog

prog: ponto.o main.o 
	gcc -o binario ponto.o main.o 

ponto.o: ponto.c
			gcc -c ponto.c

main.o: main.c
		gcc -c main.c

clean:
	rm -rf *.o

rmproper: clean
	rm -rf binario

run: prog
		./binario