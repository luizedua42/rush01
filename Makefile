all: 
	gcc -g3 -Wall -Wextra -Werror -o rush-01 *.c
	valgrind ./rush-01 | cat -e

clean: 
	rm -f rush-01
	
