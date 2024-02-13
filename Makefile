NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c 

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
