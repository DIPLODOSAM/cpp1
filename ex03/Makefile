CC      = c++
CFLAGS  = -Wall -Wextra -Werror -I include

SRC_DIR = src
OBJ_DIR = obj

SRCS    = $(SRC_DIR)/HumanA.cpp \
		  $(SRC_DIR)/HumanB.cpp \
		  $(SRC_DIR)/Weapon.cpp \
		  $(SRC_DIR)/main.cpp \

OBJS    = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME    = violence

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
