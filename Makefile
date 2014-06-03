CC		=	gcc
RM		=	rm -f
CFLAGS		=	-W -Wall -Wextra -Wno-pointer-sign -g
LDFLAGS		=	-lnfc

SRC		=	src/readnfccc.c \
			src/codes.c

OBJ		=	$(SRC:.c=.o)

NAME		=	readnfccc

all: $(NAME)

$(NAME): $(OBJ) $(ASMOBJ)
	$(CC)  $(LDFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(ASMOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
