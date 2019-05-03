#include <gtest/gtest.h>
#include "../p3.h"

TEST(p3, basic) { 
    ASSERT_EQ(12, lcm(4, 6));
}

TEST(p3, zero) { 
    ASSERT_EQ(0, lcm(4, 0));
}

TEST(p3, one) { 
    ASSERT_EQ(4, lcm(4, 1));
}

TEST(p3, vector) { 
    ASSERT_EQ(60, lcmr({4, 1, 3, 5, 6, 15}));
}
