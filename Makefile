main.exe: main.o
	gcc main.o -o main.exe

main.o: main.c
	gcc -c main.c -o main.o

clean:
	del main.o main.exe