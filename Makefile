NAME 	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -fr

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
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
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

OBJ_DIR	=	obj
OBJ 	=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


# Règle principale
all				: 	$(OBJ_DIR) $(NAME)

# Vérification et création du dossier obj
$(OBJ_DIR) 		:
	mkdir -p $(OBJ_DIR)

# Compilation des fichiers objets
$(OBJ_DIR)/%.o	: 	%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

# Création de la bibliothèque
$(NAME)			:	$(OBJ)
	ar -rcs $(NAME) $(OBJ)

#$@:$<


#############################################################################################
#																							#
#								// CLEAN  FCLEAN  RE										#
#																							#
#############################################################################################

clean 	:
	$(RM) $(OBJ_DIR)/*.o 

fclean 	: 	clean
	$(RM) $(NAME)

re 		:	 fclean all

.PHONY: all src clean fclean re