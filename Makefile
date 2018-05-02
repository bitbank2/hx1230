CFLAGS=-c -Wall -O2

all: libhx1230.a

libhx1230.a: hx1230.o
	ar -rc libhx1230.a hx1230.o ;\
	sudo cp libhx1230.a /usr/local/lib ;\
	sudo cp hx1230.h /usr/local/include

hx1230.o: hx1230.c
	$(CC) $(CFLAGS) hx1230.c

clean:
	rm *.o libhx1230.a

