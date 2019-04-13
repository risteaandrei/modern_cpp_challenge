#include <gtest/gtest.h>
#include "../src/math2/test/gcd_test.cpp"
#include "../src/math3/test/lcm_test.cpp"

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
