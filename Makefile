APP_DIR = appendix
INC_DIR = include
SRC_DIR = src
TARGET = $(APP_DIR)/main.exe
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(APP_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c)) $(APP_DIR)/main.o

all: $(TARGET)
	./$<



$(TARGET): $(OBJECTS)
	mkdir -p $(APP_DIR)
	gcc $(OBJECTS) -o $@
	./$@
	

$(APP_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -I$(INC_DIR) -c $< -o $@

$(APP_DIR)/main.o: main.c
	gcc -I$(INC_DIR) -c main.c -o $@

clean:
	rm -rf $(APP_DIR)/*