NAME		:= a.out

SRCS		:= main.cpp 
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

.PHONY : all clean fclean re test debug