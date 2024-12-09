CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OUTPUT_DIR = output
TARGET = $(OUTPUT_DIR)/main

$(shell mkdir -p $(dir $(TARGET)))

all: $(TARGET)
	./$(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -rf $(OUTPUT_DIR)
