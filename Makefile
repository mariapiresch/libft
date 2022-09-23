NAME = libft.a

SRCS = ft_isalpha.c	\
	   ft_isdigit.c	\
	   ft_isalnum.c	\
	   ft_isascii.c	\
	   ft_isprint.c	\
	   ft_strlen.c	\
	   ft_toupper.c	\
	   ft_tolower.c	\
	   ft_bzero.c	\
	   ft_memcpy.c	\
	   ft_memset.c	\
	   ft_memmove.c	\
	   ft_strlcpy.c	\
	   ft_strchr.c	\
	   ft_strrchr.c	\
	   ft_memchr.c	\
	   ft_strncmp.c	\
	   ft_memcmp.c	\
	   ft_strnstr.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	gcc -Wall -Werror -Wextra -fsanitize=address -c $< -o $@

$(NAME): $(OBJS)
	ar rc $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
