mainapp: main.o display.o
	gcc main.o display.o -o mainapp
main.o: main.c
	gcc -c main.c
display.o: display.c
	gcc -c display.c
clean:
	rm -f mainapp main.o display.o
