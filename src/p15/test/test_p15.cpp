#include <gtest/gtest.h>
#include "../p15.h"

TEST(p15, in) {
    ipv4 expected(1, 2, 3, 4);
    std::stringstream s("1.2.3.4");
    ipv4 ip;
    s >> ip;

    ASSERT_EQ(ip, expected);
}

TEST(p15, out) {
    std::string expected("1.2.3.4");
    ipv4 ip(1, 2, 3, 4);
    std::stringstream s;
    s << ip;

    ASSERT_EQ(s.str(), expected);
}

TEST(p15, bad_input) {
    ipv4 expected({0});
    std::stringstream s("1-2.3.4");
    ipv4 ip;
    s >> ip;

    ASSERT_EQ(ip, expected);
    ASSERT_TRUE(s.fail());
}

TEST(p15, bad_input2) {
    ipv4 expected({0});
    std::stringstream s("1.A.3.4");
    ipv4 ip;
    s >> ip;

    ASSERT_EQ(ip, expected);
    ASSERT_TRUE(s.fail());
}