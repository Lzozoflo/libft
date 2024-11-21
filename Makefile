NAME 	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -fr
AR		=	ar -rcs

# Commandes des couleurs
GREEN	=	\033[0;32m
BLUE	=	\033[0;34m
RED		=	\033[0;31m
YELLOW	=	\033[0;33m
RESET	=	\033[0m


#############################################################################################
#																							#
#										// SOURCE											#
#																							#
#############################################################################################


INC		=		libft.h


SRC 	=		ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c


#############################################################################################
#																							#
#										// OBJECT											#
#																							#
#############################################################################################


OBJ 	=	$(SRC:.c=.o)


#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


# Règle principale
all				: 	$(NAME)


# Compilation des fichiers objets
%.o	: 	%.c $(INC)
			$(CC) $(CFLAGS) -c $< -o $@


clean 			:
			$(RM) *.o


# Création de la bibliothèque
$(NAME)			:	$(OBJ) 
			$(AR) $(NAME) $(OBJ)


#############################################################################################
#																							#
#										// BONUS											#
#																							#
#############################################################################################


BONUS		=	bonus

SRC_BONUS 	=	ft_lstadd_back_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstmap_bonus.c\
				ft_lstnew_bonus.c\
				ft_lstsize_bonus.c


OBJ_BONUS 		=	$(SRC_BONUS:.c=.o)


bonus 			:
				@make --no-print-directory OBJ="$(OBJ_BONUS)"



#############################################################################################
#																							#
#								    // CLEAN  FCLEAN  RE									#
#																							#
#############################################################################################


fclean 			: 	clean
			$(RM) $(NAME)


re 				:	 fclean all


.PHONY: all clean fclean re bonus