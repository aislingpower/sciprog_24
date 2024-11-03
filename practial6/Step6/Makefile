CC = gcc # C compiler 
CCFLAGS = -03
LDFLAGS = -lm 

all: mmc

mmc:  main.o mm.o 
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c 
	$(CC) -c $< 

main.o: main.c 
	$(CC) -c $<

clean: 
	rm *.o *.mod 
