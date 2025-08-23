# Executable name
TARGET = test

# Directories
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Compiler
CC = cc

# Raylib flags (pkg-config)
CFLAGS = -Wall -std=c17 $(shell pkg-config --cflags raylib) -I$(INC_DIR)
LDFLAGS = $(shell pkg-config --libs raylib)

# Source files and objects
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Default rule
all: $(BUILD_DIR) $(TARGET)

# Final linking
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# Compile each .c into .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Create build folder if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Run the game
run: all
	./$(TARGET)