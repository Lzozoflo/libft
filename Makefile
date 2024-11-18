NAME 	=	libft.a
CC		=	gcc
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


OBJ_DIR	=	Object
OBJ 	=	$(SRC:.c=.o)

#$(addprefix $(OBJ_DIR)/,
#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


# Règle principale
all				: 	$(OBJ) $(NAME)
			@echo "$(GREEN) Compilation de $(NAME) succès ! $(RESET)"


# Vérification et création du dossier obj
$(OBJ_DIR) 		:
			mkdir -p $(OBJ_DIR)
			@echo "$(BLUE)Création / Vérification du Dossier ''$(OBJ_DIR_BONUS)''$(RESET)"


# Compilation des fichiers objets
%.o	: 	%.c $(INC)
			$(CC) $(CFLAGS) -c $< -o $@
#			@echo "$(BLUE)Compilation de $< succès ! $(RESET)"


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

OBJ_DIR_BONUS	=	Object_bonus
OBJ_BONUS 		=	$(SRC_BONUS:.c=.o)

#$(addprefix $(OBJ_DIR_BONUS)/, 
bonus 			:
				@make --no-print-directory OBJ="$(OBJ_BONUS)"

#bonus			:	$(OBJ_BONUS) $(NAME)
#			$(AR) $(NAME) $(OBJ_BONUS)
#			@echo "$(GREEN)Ajout des fichiers BONUS à $(NAME) succès !$(RESET)"

$(OBJ_DIR_BONUS) :
			mkdir -p $(OBJ_DIR_BONUS)
			@echo "$(BLUE)Création / Vérification du Dossier '$(OBJ_DIR_BONUS)'$(RESET)"

$(OBJ_DIR_BONUS)%.o	: 	%.c $(INC)
			$(CC) $(CFLAGS) -c $< -o $@
			@echo "$(BLUE)Compilation de $< succès ! $(RESET)"

BONUS		=	bonus


#############################################################################################
#																							#
#								    // CLEAN  FCLEAN  RE									#
#																							#
#############################################################################################

clean 			:
			$(RM) *.o
			@echo "$(RED) Suppression des .o succès ! $(RESET)"


clea		:
			$(RM) $(OBJ_DIR) $(OBJ_DIR_BONUS)
			@echo "$(RED) Suppression du dossier ''$(OBJ_DIR)'' succès ! $(RESET)"


fclean 			: 	clean
			$(RM) $(NAME)
			@echo "$(RED) Suppression de $(NAME) succès ! $(RESET)"


re 				:	 fclean all


.PHONY: all src clean fclean re bonus