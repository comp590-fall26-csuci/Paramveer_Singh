
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "fibonacci.h"

int main(void) {
    assert(fibonacci(0) == 0);
    puts("PASS: fibonacci(0) = 0");

    assert(fibonacci(1) == 1);
    puts("PASS: fibonacci(1) = 1");

    assert(fibonacci(5) == 5);
    puts("PASS: fibonacci(5) = 5");

    assert(fibonacci(10) == 55);
    puts("PASS: fibonacci(10) = 55");

    double ratio = golden_ratio_approx(10);

    assert(fabs(ratio - 1.61803398875) < 0.000001);
    printf("PASS: golden_ratio_approx(10) = %.6f\n", ratio);

    puts("All 5 unit tests passed.");
    return 0;
}
