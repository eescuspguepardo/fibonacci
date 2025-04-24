# Compilador
CC = clang-19
CFLAGS = -g -Wall -O3

# Diretórios
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build

# Target
NOME_EXECUTAVEL = fib
TARGET = $(BIN_DIR)/$(NOME_EXECUTAVEL)

# Arquivos
SOURCES = $(wildcard $(SRC_DIR)/*.c)
HEADERS = $(wildcard $(SRC_DIR)/*.h)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SOURCES))


# Criar diretórios bin e build
$(BIN_DIR) $(BUILD_DIR):
	mkdir -p $@

# Compilar arquivos .c em arquivos .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Coloca como função padrão "all"
.DEFAULT_GOAL := all

all: $(BIN_DIR) $(BUILD_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET) -lm

debug: $(BIN_DIR) $(BUILD_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET) -DDEBUG

run:
	$(TARGET)

clean:
	@rm -rf $(BUILD_DIR) $(BIN_DIR) core

.PHONY: all debug run clean
