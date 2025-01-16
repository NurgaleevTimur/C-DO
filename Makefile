main.exe: main.o c.o
	gcc main.o c.o -o main.exe

main.o: main.c c.h
	gcc -c main.c -o main.o

c.o: c.c c.h
	gcc -c c.c -o c.o

clean:
	rm -f main.o c.o main.exe