#CPPC is short for CPP Compiler
CPPC=clang++
NAME=megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	$(CPPC) -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean
	make all

.PHONY: all clean fclean re