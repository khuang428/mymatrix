all: main.o draw.o display.o matrix.o
	gcc -o main main.o draw.o display.o matrix.o

main.o: main.c display.h draw.h ml6.h matrix.h
	gcc -c main.c

draw.o: draw.c draw.h display.h ml6.h matrix.h
	gcc -c draw.c

display.o: display.c display.h ml6.h matrix.h
	gcc -c display.c

matrix.o: matrix.c matrix.h
	gcc -c matrix.c

run: main
	./main
clean:
	rm *.o *~ main
