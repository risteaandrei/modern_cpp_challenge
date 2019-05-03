#include <gtest/gtest.h>
#include "../p17.h"

#include <string>

TEST(p17, op) {
    array2d<int, 2, 2> a{1, 2, 3, 4};

    ASSERT_EQ(a(0,0), 1);
    ASSERT_EQ(a(0,1), 2);
    ASSERT_EQ(a(1,0), 3);
    ASSERT_EQ(a(1,1), 4);
}

TEST(p17, fill) {
    array2d<int, 2, 2> a;
    a.fill(2);

    array2d<int, 2, 2> expected{2, 2, 2, 2};

    ASSERT_EQ(a, expected);
}

TEST(p17, iterate) {
    array2d<int, 3, 2> a;
    a.fill(1);

    std::stringstream s;
    std::copy(a.begin(), a.end(), std::ostream_iterator<int>(s, " "));

    std::string expected{"1 1 1 1 1 1 "};
    ASSERT_EQ(s.str(), expected);
}

TEST(p17, swap) {
    array2d<int, 2, 2> a{0, 0, 0, 0}, b{1, 1, 1, 1};
    array2d<int, 2, 2> expectedA = b, expectedB = a;
    a.swap(b);

    ASSERT_EQ(a, expectedA);
    ASSERT_EQ(b, expectedB);
}
