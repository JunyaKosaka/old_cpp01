NAME		:= harlFilter

SRCS		:= main.cpp Harl.cpp
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
	@echo "\n---  DEBUG  ---"
	./$(NAME) "DEBUG"
	@echo "\n---  INFO  ---"
	./$(NAME) "INFO"
	@echo "\n---  WARNING  ---"
	./$(NAME) "WARNING"
	@echo "\n---  ERROR  ---"
	./$(NAME) "ERROR"
	@echo "\n---  UNKNOWN  ---"
	./$(NAME) "UNKNOWN"

lint :
	cpplint $(SRCS)

.PHONY : all debug clean fclean re test lint
