all:register static 

register: register_storage_tpye.o
	gcc -o register register_storage_tpye.o 
register.o: register_storage_tpye.c
	gcc -c register_storage_tpye.c

static: static.o
	gcc -o static static.o 
static.o: static.c
	gcc -c static.c


clean:
	rm *.o
	rm register static