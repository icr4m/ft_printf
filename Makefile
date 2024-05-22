NAME : libftprintf.a

# Compilation
CC = cc

# C Flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = 	
 
# Object files
OBJS = $(SRCS:.c=.o)

# Archives
AR = ar rc 

# rules
all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o: 
	$(CC) $(CFLAGS) -c -include libft.h $< -o ${<:.c=.o}
	
clean:
	rm -rf ${OBJS} ${OBJS_B}

fclean: clean
	rm -rf $(NAME)

re: fclean all