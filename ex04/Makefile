NAME		:= a.out

SRCS		:= main.cpp 
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

INPUTFILE	:= sample1.txt

test : $(NAME)
	./$(NAME) $(INPUTFILE) bb cccc
	cat $(INPUTFILE).replace

.PHONY : all clean fclean re test
