CC = gcc
AR = ar
MAINOBJECTS = main.o
LIBOBJECTS = power.o basicMath.o 
FLAGS = -Wall -g

all: libmyMath.so libmyMath.a mains maind

mains:  $(MAINOBJECTS)  libmyMath.a
	$(CC)  $(FLAGS) -o mains  $(MAINOBJECTS)  libmyMath.a
	
maind: $(MAINOBJECTS)  libmyMath.so
	$(CC) $(FLAGS) -o maind $(MAINOBJECTS)  ./libmyMath.so
	
libmyMath.so: $(LIBOBJECTS)
	$(CC) -shared -o libmyMath.so $(LIBOBJECTS)
	
libmyMath.a: $(LIBOBJECTS)
	$(AR) -rcs libmyMath.a $(LIBOBJECTS)
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
	
clean:
	rm -f  maind mains  *.o  *.a  *.so
	
.PHONY: clean all