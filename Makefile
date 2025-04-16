COMPILER = cc

CFLAGS = -Wall -Wextra -Werror
RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

MANDATORY =	mandatory/rev_rotate_ops.c \
			mandatory/input_guard.c \
			mandatory/converters.c \
			mandatory/rotate_ops.c \
			mandatory/push_swap.c \
			mandatory/utilities.c \
			mandatory/manage_sort.c \
			mandatory/swap_ops.c \
			mandatory/push_ops.c \
			mandatory/strlab.c \
			mandatory/chunk_algorithm.c \
			mandatory/events.c 

BONUS = bonus/rev_rotate_ops_bonus.c \
		bonus/input_guard_bonus.c \
		bonus/converters_bonus.c \
		bonus/rotate_ops_bonus.c \
		bonus/push_swap_bonus.c \
		bonus/utilities_bonus.c \
		bonus/swap_ops_bonus.c \
		bonus/push_ops_bonus.c \
		bonus/strlab_bonus.c \
		bonus/events_bonus.c 

OBJM = ${MANDATORY:.c=.o}
OBJB = ${BONUS:.c=.o}

NAME = push_swap
BONUS_NAME = checker

all: ${NAME}

${NAME} : ${OBJM} mandatory/push_swap.h
	@echo "${RED}🚀 Launching compilation...${RESET}"
	${COMPILER} ${CFLAGS} ${OBJM} -o ${NAME}
	@echo "${GREEN}✅ ${NAME} successfully compiled!${RESET}"

bonus : ${OBJB} bonus/push_swap_bonus.h
	@echo "${RED}🚀 Launching compilation...${RESET}"
	${COMPILER} ${CFLAGS} ${OBJB} -o ${BONUS_NAME}
	@echo "${GREEN}✅ ${BONUS_NAME} successfully compiled!${RESET}"

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	${COMPILER} ${CFLAGS} -c $< -o $@

bonus/%.o: bonus/%.c bonus/push_swap_bonus.h
	${COMPILER} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJM} $(OBJB)
	@echo "${RED}🗑 Object files removed!${RESET}"

fclean: clean
	${RM} ${NAME} ${BONUS_NAME}
	@echo "${RED}🔥 Executable removed!${RESET}"

re: fclean all

.PHONY: all clean fclean re
