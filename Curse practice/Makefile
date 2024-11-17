all: prog

prog: main.o temp_functions.o consoleComands.o
	gcc -o prog main.o temp_functions.o consoleComands.o

main.o: main.c temp_functions.h
	gcc  -c -o main.o main.c

temp_functions.o: temp_functions.c temp_functions.h
	gcc  -c -o temp_functions.o temp_functions.c

consoleComands.o: consoleComands.c temp_functions.h
	gcc -c -o consoleComands.o consoleComands.c

clean:
	rm -rf *.o prog 
