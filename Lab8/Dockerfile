
FROM docker.io/library/debian:13-slim

# Install the C compiler and build tools
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        gcc \
        make \
        libc6-dev && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Copy the original Lab3/Lab4 build files
COPY Makefile ./Makefile
COPY 590MakefileLab/ ./590MakefileLab/

# Copy the unit tests
COPY tests/ ./tests/

# Compile the Fibonacci application
RUN make all

# Compile the unit-test executable
RUN gcc -Wall -Wextra \
    -I590MakefileLab/headers \
    tests/test_fibonacci.c \
    590MakefileLab/fibonacci.c \
    -lm \
    -o unit_tests

# Execute unit tests when the container starts
ENTRYPOINT ["./unit_tests"]
