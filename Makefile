# Переменные для путей файлов
APP_DIR = appendix
SRC_DIR = src
INC_DIR = include
LINT_FILE = .make/lint
NUMBER_FILE = .make/number
REPORT_FILE = .make/report
TARGET = $(APP_DIR)/main.exe
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(APP_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c))
DEPFILES = $(OBJECTS:.o=.d)
BLOG	=	$(APP_DIR)/build.log
RFILE	=	$(APP_DIR)/report.md

# Включение переменных файла number
include $(NUMBER_FILE)

# Флаги компилятора и линтера, а также добавление макрокоманд
LINTFLAGS = $(shell cat $(LINT_FILE) | grep "^LINTFLAGS" | sed 's/LINTFLAGS		+= //g')

# Флаг пути к заголовочным файлам, создания зависимостей и макросов
CFLAGS = -I$(INC_DIR) -D MAJ_VERSION=$(BASE) -D MIN_VERSION=$(RELEASE) -D BUILD_VERSION=$(GITCOMMIT)

# Цель по дефолту
all:  $(TARGET) report

# Линт проверка
lint:
	@echo "running lint..."
	gcc $(LINTFLAGS) -I$(INC_DIR) -fsyntax-only $(wildcard $(SRC_DIR)/*.c)
	@echo "lint check complete"

# Основная цель
$(TARGET): $(OBJECTS)	
	@echo "Linking..."
	mkdir -p $(APP_DIR)
	gcc $(OBJECTS) -o $@
	@echo "linking completed"

# Цель для создания объектных файлов
$(APP_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Creating object files"
	gcc $(CFLAGS) -c $< -o $@
	@echo "Object files created"

# Добавление зависимостей
-include $(DEPFILES)

# Создание отчёта
-include $(REPORT_FILE)

# Цель для очистки
clean:
	@echo "Clearing..."
	rm -rf $(APP_DIR)/*
	@echo "Сleaning is finished"

.PHONY: all lint report clean head system build message tail