#include "../p2.cpp"

TEST(p2, basic) { 
    ASSERT_EQ(2, gcd(4, 6));
}

TEST(p2, prime) { 
    ASSERT_EQ(1, gcd(3, 5));
}

TEST(p2, random) { 
    ASSERT_EQ(12, gcd(24, 36));
}

TEST(p2, zero) { 
    ASSERT_EQ(2, gcd(0, 2));
}

