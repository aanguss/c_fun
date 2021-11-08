#include "mod1p1_cooktop.cpp"
#include <gtest/gtest.h>
// https://www.srcmake.com/home/google-cpp-test-framework
// https://softwareengineering.stackexchange.com/questions/260183/in-tdd-should-i-have-to-write-test-first-or-interface-first?newreg=94ab41824629433e96eb1d9e8104a0ed

TEST(Mod1Test, UseMod1NS) 
{
    Mod1::P1_cooktop p1;
    ASSERT_EQ(p1.hashit("quit"), 0);
    ASSERT_EQ(p1.hashit("button"), 1);
    ASSERT_EQ(p1.hashit("timer"), 2);
    ASSERT_EQ(p1.hashit("updown"), 3);
    ASSERT_EQ(p1.hashit("blah"), 99);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}