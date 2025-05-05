server: main.o file.o threadPool.o
	gcc $^ -o $@ -lpthread

main.o: main.c
	gcc $^ -o $@ -g -Wall
file.o: file.c
	gcc $^ -o $@ -g -Wall
threadPool.o: threadPool.c
	gcc $^ -o $@ -g -Wall

clean:
	rm -f *.o server