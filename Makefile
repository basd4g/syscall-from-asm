exit:
	gcc -o exit.o exit.c start.s _exit.s -nostdlib
write:
	gcc -o write.o write.c start.s write.s -nostdlib
clean:
	rm -rf *.o
.PHONY: clean
