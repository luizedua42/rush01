all: 
	@gcc -g -w -Wall -Wextra -Werror -o rush-01 *.c
	# ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

clean: 
	rm -f rush-01
	
