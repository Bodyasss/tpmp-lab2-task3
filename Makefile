all: task

task: main.o date.o person.o
	gcc -o task main.o date.o person.o

main.o: src/main.c
	gcc -c src/main.c -Iinclude

date.o: src/date.c
	gcc -c src/date.c -Iinclude

person.o: src/person.c
	gcc -c src/person.c -Iinclude

clean:
	rm -f *.o task