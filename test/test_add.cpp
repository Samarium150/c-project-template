#include <gtest/gtest.h>

extern "C" {
#include "adder.h"
}

TEST(adder, add) {
    double res = add(1.0, 2.0);
    ASSERT_NEAR(res, 3.0, 1.0e-11);
}
