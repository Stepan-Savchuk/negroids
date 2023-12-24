CC=gcc

S_DIR=src

S_FILES=$(S_DIR)/main.c $(S_DIR)/render.c $(S_DIR)/input.c $(S_DIR)/Building.c

FLAGS= -g

main: $(S_DIR)/main.c
	$(CC) $(FLAGS) $(S_FILES)
