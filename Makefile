APP_DIR = appendix
INC_DIR = include
SRC_DIR = src
LINT_FILE = .make/lint
TARGET = $(APP_DIR)/main.exe

OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(APP_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c)) $(APP_DIR)/main.o

LINTFLAGS = $(shell cat $(LINT_FILE) | grep "^LINTFLAGS" | sed 's/LINTFLAGS		+= //g')


all: lint $(TARGET)
	./$(TARGET)

lint: $(wildcard $(SRC_DIR)/*.c) main.c
	gcc $(LINTFLAGS) -fsyntax-only $(wildcard $(SRC_DIR)/*.c) main.c

$(TARGET): $(OBJECTS)
	mkdir -p $(APP_DIR)
	gcc $(OBJECTS) -o $@
	

$(APP_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c $< -o $@

$(APP_DIR)/main.o: main.c
	gcc -c main.c -o $@

clean:
	rm -rf $(APP_DIR)/*

.PHONY: lint