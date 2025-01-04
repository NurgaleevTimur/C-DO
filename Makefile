main.exe: main.o
	gcc main.o -o main.exe

main.o: main.c
	gcc -c main.c -o main.o

main.i: main.c
	gcc -E main.c -o main.i
	
clean:
	del main.exe main.o