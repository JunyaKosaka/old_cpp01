NAME		:= a.out

SRCS		:= main.cpp 
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

INPUTFILE	:= sample.txt

all	: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

debug : CXXFLAGS += -g -fsanitize=address 
debug : re

clean :
	$(RM) $(OBJS) $(INPUTFILE) $(INPUTFILE).replace

fclean : clean
	$(RM) $(NAME)

re : fclean all

test : debug
	echo "aab\nbbb\ncbb" > $(INPUTFILE)
	./$(NAME) $(INPUTFILE) bb xxx
	cat $(INPUTFILE).replace
	-./$(NAME) nonexist aa bb
	-./$(NAME) $(INPUTFILE) "" bb

lint :
	cpplint $(SRCS)

.PHONY : all clean fclean re test debug
