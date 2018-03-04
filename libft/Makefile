NAME		= libft.a

CC		= gcc
CFLAGS		+= -Wall -Wextra -Werror 

INCDIR		= includes
LIBFTDIR	= src

SRC	=	ft_atoi \
	  ft_bzero \
	  ft_isalnum \
	  ft_isalpha \
	  ft_isascii \
	  ft_isdigit \
	  ft_isprint \
	  ft_itoa \
	  ft_memalloc \
	  ft_memccpy \
	  ft_memchr \
	  ft_memcmp \
	  ft_memcpy \
	  ft_memdel \
	  ft_memmove \
	  ft_memset \
	  ft_putchar \
	  ft_putchar_fd \
	  ft_putendl \
	  ft_putendl_fd \
	  ft_putnbr \
	  ft_putnbr_fd \
	  ft_putstr \
	  ft_putstr_fd \
	  ft_strcat \
	  ft_strchr \
	  ft_strclr \
	  ft_strcmp \
	  ft_strcpy \
	  ft_strdel \
	  ft_strdup \
	  ft_strequ \
	  ft_striter \
	  ft_striteri \
	  ft_strjoin \
	  ft_strlcat \
	  ft_strlen \
	  ft_strmap \
	  ft_strmapi \
	  ft_strncat \
	  ft_strncmp \
	  ft_strncpy \
	  ft_strnequ \
	  ft_strnew \
	  ft_strnstr \
	  ft_strrchr \
	  ft_strsplit \
	  ft_strstr \
	  ft_strsub \
	  ft_strtrim \
	  ft_tolower \
	  ft_toupper \
	  ft_lstadd \
	  ft_lstdel \
	  ft_lstdelone \
	  ft_lstiter \
	  ft_lstnew \
	  ft_lstmap \
	  ft_lstcount \
	  ft_int_bsort \
	  ft_rand \
	  ft_isspace \
	  ft_countwords \
	ft_lstrev \
	ft_strrealloc \

SRCS	=	$(addprefix $(LIBFTDIR)/,$(addsuffix .c,$(SRC)))

OBJS	= 	$(addsuffix .o,$(SRC))

.PHONY: all clean fclean re

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 
	ranlib $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -I$(INCDIR)

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all 
