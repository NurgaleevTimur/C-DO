APP_DIR = appendix
INC_DIR = include
SRC_DIR = src
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(APP_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c))
TARGET = appendix/main.exe

$(TARGET): $(OBJECTS)
	gcc $(OBJECTS) -o $@

$(APP_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(APP_DIR)/*

.PHONY: clean