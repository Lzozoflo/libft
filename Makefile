NAME = libft.a
CCFLAGS = -Wall -Wetra -Werror

all : $(NAME)











clean :
	rm -fr *.o

fclean : clean
	rf -f$(NAME)

re : fclean all
