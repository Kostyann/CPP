NAME = ft_retro
SRC_DIR = ./src/
INC_DIR = ./include/
CLASS_DIR = ./classes/
# BIN_DIR = ./objects/
ERRFL = -Wall -Wextra -Werror

CUR_FLAG =  -lncurses

CLASS = Enemy.class.cpp \
		Player.class.cpp \
		Musor.class.cpp \
		Bullet.class.cpp \
		Visual.class.cpp \
		Entity.class.cpp \
		Boss.class.cpp \

SRC = main.cpp \


INCLUDES = ./Visual.class.hpp

SRCD = $(addprefix $(SRC_DIR), $(SRC))
INCD = $(addprefix $(CLASS_DIR), $(INCLUDES))
CLASSD = $(addprefix $(CLASS_DIR), $(CLASS))
# BIND = $(addprefix $(BIN_DIR), $(BIN))

BIN =  $(CLASSD:.cpp=.o) $(SRCD:.cpp=.o)

all: $(NAME)

$(NAME): $(BIN) 
	clang++ $(ERRFL) -o $(NAME) $(BIN) $(CUR_FLAG)

%.o: %.cpp $(INCD)
	clang++ $(ERRFL) -o $@ -c $< -I $(CLASS_DIR)

clean:
	@/bin/rm -f $(BIN)
	@/bin/rm -f *~

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all