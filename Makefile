NAME : libftprintf.a

# Compilation
CC = cc

# C Flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = 	ft_printf_utils.c \
	ft_printf.c \
	ft_put_printf.c 

# Object files
OBJS = $(SRCS:.c=.o)

# Archives
AR = ar rc 

# rules
all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o: 
	$(CC) $(CFLAGS) -c -include ft_printf.h $< -o ${<:.c=.o}
	
clean:
	rm -rf ${OBJS} ${OBJS_B}

fclean: clean
	rm -rf $(NAME)

re: fclean all