COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

MANDATORY =	./mandatory/push_swap.c ./mandatory/stack_ops.c ./mandatory/ops.c \
			./mandatory/rotations.c ./mandatory/sort.c ./mandatory/input.c \
			./mandatory/utils.c
BONUS_FILES =	./bonus/push_swap_bonus.c ./bonus/ops_bonus.c ./bonus/moves_bonus.c \
		./bonus/utils_bonus.c

OBJM = $(MANDATORY:.c=.o)

OBJB = $(BONUS_FILES:.c=.o)

NAME = push_swap
BONUS = checker

all: $(NAME)

$(NAME) : $(OBJM)
	$(COMPILER) $(CFLAGS) -o $(NAME) $(OBJM)

bonus: $(OBJB)
	$(COMPILER) $(CFLAGS) -o $(BONUS) $(OBJB)

./mandatory/%.o: %.c ./mandatory/push_swap.h
	$(COMPILER) $(CFLAGS) -c $< -o $@

./bonus/%.o: %.c ./bonus/push_swap_bonus.h
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJM) $(OBJB)

fclean: clean
	$(RM) $(NAME) $(BONUS)

re: fclean all

.PHONY: clean
