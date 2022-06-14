NAME		:= a.out

SRCS		:= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

all	: $(NAME)

debug : CXXFLAGS += -g -fsanitize=address
debug : re

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

test : debug
	./$(NAME)

lint :
	cpplint $(SRCS)

.PHONY : all debug clean fclean re test lint
