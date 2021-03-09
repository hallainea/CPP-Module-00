SOURCES				=	phonebook.cpp \
						contact.cpp \
						main.cpp
OBJECTS				=	${SOURCES:.cpp=.o}

NAME				=	phonebook

COMPILE				=	clang++
REMOVE				=	rm -f

COMPILATION_FLAGS	=	-Wall -Wextra -Werror

.cpp.o:
	${COMPILE} ${COMPILATION_FLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJECTS}
	${COMPILE} -o ${NAME} ${OBJECTS}

clean:
	${REMOVE} ${OBJECTS}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re
