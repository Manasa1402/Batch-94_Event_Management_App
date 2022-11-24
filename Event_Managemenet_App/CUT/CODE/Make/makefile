eveapp: eve_main.o eve_menu.o eve_func1.o eve_func2.o eve_func3.o eve_valid2.o
	gcc -o eve_main.o eve_menu.o eve_func1.o eve_func2.o eve_func3.o eve_valid2.o 

eve_main.o:eve_main.c eve_header.h
	gcc -o eve_main.o -c eve_main.c

eve_menu.o:eve_menu.c eve_header.h
	gcc -o eve_menu.o -c eve_menu.c

eve_func1.o:eve_func1.c eve_header.h
	gcc -o eve_func1.o -c eve_func1.c

eve_func2.o:eve_func2.c eve_header.h
	gcc -o eve_func2.o -c eve_func2.c

eve_func3.o:eve_func3.c eve_header.h
	gcc -o eve_func3.o -c eve_func3.c

eve_valid2.o:eve_valid2.c eve_header.h
	gcc -o eve_valid2.o -c eve_valid2.c
clean: 
	rm *.o


