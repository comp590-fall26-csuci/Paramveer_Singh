CC = gcc
CFLAGS = -Wall -Wextra -I590MakefileLab/headers
TARGET = fibonacci
SRC = 590MakefileLab/main.c 590MakefileLab/fibonacci.c

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -lm

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
