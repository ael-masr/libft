NAME = libft.a

CC = gcc

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_strlcpy.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $^

$(NAME): ${OBJS}
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: debug re fclean all bonus
