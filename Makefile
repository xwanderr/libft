# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/07 12:22:06 by ysizarie          #+#    #+#              #
#    Updated: 2019/03/10 18:37:22 by ysizarie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Resulting library
NAME:=libft.a
#Compiler
COMPILER:=gcc
CFLAGS:=-Wall -Wextra -Werror
#Directories
SRC_DIR:=./sources/
OBJ_DIR:=./objects/
INC_DIR:=./includes/
#Files
SOURCES:=ft_swap_bits.c ft_rot_13.c ft_lstmap.c ft_lstiter.c ft_lstadd.c \
ft_lstdel.c ft_lstdelone.c ft_itoa.c ft_strmapi.c ft_strsub.c ft_lstnew.c \
ft_strequ.c ft_strnequ.c ft_strmap.c ft_strtrim.c ft_strjoin.c ft_putnbr.c \
ft_strsplit.c ft_putendl.c ft_putstr.c ft_putchar.c ft_memalloc.c \
ft_putendl_fd.c ft_putstr_fd.c ft_memdel.c ft_strclr.c ft_strdel.c \
ft_striter.c ft_striteri.c ft_strnew.c ft_putchar_fd.c ft_putnbr_fd.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
OBJECTS:=$(addprefix $(OBJ_DIR), $(SOURCES:.c=.o))
#Non-file rules
.PHONY: all clean fclean re
.SILENT: all clean fclean re $(NAME) $(OBJECTS) $(OBJ_DIR)
#Rules
all: $(NAME)
$(NAME): $(OBJECTS)
	ar rc $@ $(OBJECTS)
	ranlib $@
$(OBJECTS): | $(OBJ_DIR)
$(OBJ_DIR):
	mkdir $@
$(OBJ_DIR)%.o: %.c
	$(COMPILER) $(CFLAGS) -c $< -o $@
#delete objects
clean:
	rm -f $(OBJECTS)
#Delete library and objects
fclean: clean
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)
#Recompile project
re: fclean all
#Path to .c files
vpath %.c $(SRC_DIR)
