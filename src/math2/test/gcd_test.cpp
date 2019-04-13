// tests.cpp
#include "../gcd.cpp"

TEST(gcd, basic) { 
    ASSERT_EQ(2, gcd(4, 6));
}

TEST(gcd, prime) { 
    ASSERT_EQ(1, gcd(3, 5));
}

TEST(gcd, random) { 
    ASSERT_EQ(12, gcd(24, 36));
}

TEST(gcd, zero) { 
    ASSERT_EQ(2, gcd(0, 2));
}

