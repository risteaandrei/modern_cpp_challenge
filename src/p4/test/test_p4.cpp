#include <gtest/gtest.h>
#include "../p4.h"

TEST(p4, basic) { 
    ASSERT_EQ(11, largest_prime(12));
}

TEST(p4, basic2) { 
    ASSERT_EQ(19, largest_prime(21));
}

TEST(p4, two) { 
    ASSERT_EQ(0, largest_prime(2));
}

TEST(p4, three) { 
    ASSERT_EQ(2, largest_prime(3));
}

TEST(p4, four) { 
    ASSERT_EQ(3, largest_prime(4));
}
