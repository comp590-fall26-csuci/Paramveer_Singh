CC = gcc
CFLAGS = -Wall -Wextra -I590MakefileLab/headers

TARGET = fibonacci
TEST_TARGET = fibonacci_tests

SRC = 590MakefileLab/main.c 590MakefileLab/fibonacci.c
TEST_SRC = 590MakefileLab/test_fibonacci.c 590MakefileLab/fibonacci.c

all: $(TARGET) $(TEST_TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -lm

$(TEST_TARGET):
	$(CC) $(CFLAGS) $(TEST_SRC) -o $(TEST_TARGET) -lm

run: $(TARGET)
	./$(TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all run test clean
