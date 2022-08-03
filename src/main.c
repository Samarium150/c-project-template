#include <stdio.h>

#include "adder.h"

int main(void) {
    double res = add(1.0, 2.0);
    printf("%lf\n", res);
    return 0;
}
