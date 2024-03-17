NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c 

#BONUS =

OBJS = $(SRCS:.c=.o)

#OBJSBONUS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f

FLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) $(FLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
bonus: $(OBJSBONUS)
	ar rcs $(NAME) $(OBJSBONUS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
