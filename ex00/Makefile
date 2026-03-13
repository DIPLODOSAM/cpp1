CC      = c++
CFLAGS  = -Wall -Wextra -Werror -I include

SRC_DIR = src
OBJ_DIR = obj

SRCS    = 	$(SRC_DIR)/Zombie.cpp \
			$(SRC_DIR)/newZombie.cpp \
			$(SRC_DIR)/randomChump.cpp \
			$(SRC_DIR)/main.cpp

OBJS    = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME    = zombie

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
