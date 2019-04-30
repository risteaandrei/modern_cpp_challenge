#include <gtest/gtest.h>
#include "../p14.h"

TEST(p14, valid) { 
    ASSERT_TRUE(validate_isbn_10("1000000001"));
}

TEST(p14, valid2) { 
    ASSERT_TRUE(validate_isbn_10("1200001001"));
}

TEST(p14, invalid) { 
    ASSERT_FALSE(validate_isbn_10("1000000002"));
}