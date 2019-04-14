#include <gtest/gtest.h>
#include "../src/p2/test/p2_test.cpp"
#include "../src/p3/test/p3_test.cpp"
#include "../src/p4/test/p4_test.cpp"

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
