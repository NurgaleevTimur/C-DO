SRC_DIR = src
INC_DIR = include
APP_DIR = appendix
LINT_FILE = .make/lint
TARGET = $(APP_DIR)/main
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(APP_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c)) $(APP_DIR)/main.o
LINT_FLAGS = $(shell cat $(LINT_FILE) | grep "^LINTFLAGS" | sed 's/LINTFLAGS		+= //g')

all: $(TARGET)
	./$(TARGET)

lint:
	gcc $(LINT_FLAGS) -fsyntax-only $(wildcard $(SRC_DIR)/*.c) main.c


$(TARGET): $(OBJECTS)
	mkdir -p $(APP_DIR)
	gcc $^ -o $@


$(APP_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c $< -o $@

$(APP_DIR)/main.o: main.c
	gcc -c $< -o $@


clean:
	rm -f $(APP_DIR)/*

.PHONY: all lint
