#include "../lcm.cpp"

TEST(lcm, basic) { 
    ASSERT_EQ(12, lcm(4, 6));
}

TEST(lcm, zero) { 
    ASSERT_EQ(0, lcm(4, 0));
}

TEST(lcm, one) { 
    ASSERT_EQ(4, lcm(4, 1));
}

TEST(lcm, vector) { 
    ASSERT_EQ(60, lcmr({4, 1, 3, 5, 6, 15}));
}
