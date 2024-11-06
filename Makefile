NAME 	=	libft.a
FLAGS =	-Wall -Wetra -Werror
AR		=	ar rcs
RM		=	rm -fr

#############################################################################################
#																							#
#										// SOURCE											#
#																							#
#############################################################################################

INC		=		inc/libft.h

SRC 	=		src/ft_atoi.c\
				src/ft_isalnum.c\
				src/ft_isalpha.c\
				src/ft_isascii.c\
				src/ft_isdigit.c\
				src/ft_isprint.c\
				src/ft_strchr.c\
				src/ft_strdup.c\
				src/ft_strlcpy.c\
				src/ft_strlen.c\
				src/ft_strrchr.c\
				src/ft_tolower.c\
				src/ft_toupper.c\

#############################################################################################
#																							#
#										// OBJECT											#
#																							#
#############################################################################################

OBJ 	=	$(SRC:.c=.0)


#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


all		: 	$(NAME)

$(NAME)	:	$(OBJ)
			gcc -o $(NAME) $(FLAGS) $(OBJ) $(INC)


#############################################################################################
#																							#
#								// CLEAN  FCLEAN  RE										#
#																							#
#############################################################################################

clean 	:
	$(RF) *.o

fclean 	: 	clean
	$(RF) $(NAME)

re 		:	 fclean all

.PHONY: all src clean fclean re