NAME		:= a.out

SRCS		:= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

all	: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

debug : CXXFLAGS += -g -fsanitize=address
debug : re

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
