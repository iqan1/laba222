all: menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o
	gcc index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o -o menu
menu.o: index_first_zero.h index_last_zero.h sum_between.h sum_before_and_after.h
	gcc -c menu.c
index_first_zero.o: index_first_zero.h
	gcc -c index_first_zero.c
index_last_zero.o: index_last_zero.h
	gcc -c index_last_zero.c
sum_between.o: sum_between.h
	gcc -c sum_between.c
sum_before_and_after.o: sum_before_and_after.h
	gcc -c sum_before_and_after.c
