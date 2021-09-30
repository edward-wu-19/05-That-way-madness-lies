all: work05.o
	gcc -o work05 work05.o

work05.o: work05.c
	gcc -c work05.c

clean:
	rm -rf work05.o work05

run:
	./work05