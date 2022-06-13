NAME		:= a.out

SRCS		:= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

all	: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

test : $(NAME)
	./$(NAME)

lint :
	cpplint $(SRCS)

.PHONY : all clean fclean re test lint
