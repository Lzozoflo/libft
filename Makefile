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
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strrchr.c\
				ft_tolower.c\
				ft_toupper.c

#############################################################################################
#																							#
#										// OBJECT											#
#																							#
#############################################################################################

OBJ_DIR	=	obj
OBJ 	=	$(SRC:.c=.o)

#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


# all				: 	$(NAME)

# $(NAME)			:	$(OBJ)
# 		ar -rcs $(NAME) $(OBJ) $(INC)






# Règle principale
all				: 	$(OBJ_DIR) $(NAME)

# Vérification et création du dossier obj
$(OBJ_DIR) 		:
	mkdir -p $(OBJ_DIR)

# Création de la bibliothèque
$(NAME)			:	$(OBJ)
	ar -rcs $(NAME) $(OBJ)

# Compilation des fichiers objets
$(OBJ_DIR)/%.o	: 	%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
#$@:$<


#############################################################################################
#																							#
#								// CLEAN  FCLEAN  RE										#
#																							#
#############################################################################################

clean 	:
	rm -r *.o 

fclean 	: 	clean
	$(RM) $(NAME)

re 		:	 fclean all

.PHONY: all src clean fclean re