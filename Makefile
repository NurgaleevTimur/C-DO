APP_DIR = appendix
INC_DIR = include
SRC_DIR = src
SET_GET = $(wildcard $(SRC_DIR)/*setget.c)


main_float.exe: $(SRC_DIR)/main_float.c
	gcc $(SRC_DIR)/main_float.c -o $(APP_DIR)/main_float.exe -lm
	./$(APP_DIR)/main_float.exe

main_double.exe: $(SRC_DIR)/main_double.c
	gcc $(SRC_DIR)/main_double.c -o $(APP_DIR)/main_double.exe -lm
	./$(APP_DIR)/main_double.exe

setget.exe: $(SET_GET)
	gcc -I$(INC_DIR) $(SET_GET) -o $(APP_DIR)/setget.exe
	./$(APP_DIR)/setget.exe

clean:
	rm -rf $(APP_DIR)/*
