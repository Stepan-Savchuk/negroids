CC=gcc

S_DIR=src

S_FILES=$(S_DIR)/main.c $(S_DIR)/render.c $(S_DIR)/Object.c $(S_DIR)/Actor.c $(S_DIR)/Player.c

FLAGS=-Wall -g

main: $(S_DIR)/main.c
	$(CC) $(FLAGS) $(S_FILES) -lcurses
