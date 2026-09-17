def fib(n):
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)


def fib_recursive(n, path):
    with open(path, "w") as f:
        for i in range(n):
            f.write(f"{fib(i)}\n")


if __name__ == "__main__":
    fib_recursive(25, "output/fibonacci.txt")
