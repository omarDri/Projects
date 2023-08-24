# Define the source files and object files for the server and client
SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

# Define the names of the executables
SERVER_NAME = server
CLIENT_NAME = client

# Define compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Include paths for libraries
LIBFT_INCLUDE = -I./printf/libft
FT_PRINTF_INCLUDE = -I./printf

# Libraries
LIBFT = printf/libft/libft.a
FT_PRINTF = printf/libftprintf.a

all: $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME): $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(SERVER_NAME) $(SERVER_SRC) $(FT_PRINTF)

$(CLIENT_NAME): $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(CLIENT_NAME) $(CLIENT_SRC) $(FT_PRINTF)

$(LIBFT):
	make -C printf/libft

$(FT_PRINTF):
	make -C printf

clean:
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ)
	make -C printf/libft clean
	make -C printf clean

fclean: clean
	rm -f $(SERVER_NAME) $(CLIENT_NAME)
	make -C printf/libft fclean
	make -C printf fclean

re: fclean all

.PHONY: all clean fclean re