test2.exe: test2.o lib2.o
	gcc -o test2.exe test2.o lib2.o

test2.o: test2.c
	gcc -o test2.o -c test2.c

lib2.o: lib2.c
	gcc -o lib2.o -c lib2.c

# remove all temp files
clean:
	rm -f test2.exe *.o
#   execute main program
run:
	./test2.exe