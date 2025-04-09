COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

MANDATORY =	mandatory/input_guard.c \
			mandatory/converters.c \
			mandatory/push_swap.c \
			mandatory/utilities.c \
			mandatory/strlab.c \
			mandatory/events.c

OBJM = ${MANDATORY:.c=.o}

NAME = push_swap

all: ${NAME}

${NAME} : ${OBJM} mandatory/push_swap.h
	@echo "${RED}🚀 Launching compilation...${RESET}"
	${COMPILER} ${CFLAGS} ${OBJM} -o ${NAME}
	@echo "${GREEN}✅ ${NAME} successfully compiled!${RESET}"

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	${COMPILER} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJM} $(OBJB)
	@echo "${RED}🗑 Object files removed!${RESET}"

fclean: clean
	${RM} ${NAME} ${BONUS_NAME}
	@echo "${RED}🔥 Executable removed!${RESET}"

re: fclean all

.PHONY: all clean fclean re
