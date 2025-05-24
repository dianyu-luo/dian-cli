#include <gtest/gtest.h>
#include <iostream>

// 一个简单的测试用例
TEST(SampleTest, Addition)
{
    EXPECT_EQ(1 + 1, 2);
    EXPECT_TRUE(2 > 1);    printf("hhwwwwwwwhh\n");

}

TEST(SampleTest, Addition1)
{
    EXPECT_EQ(1 + 1, 2);
    EXPECT_TRUE(2 > 1);
    printf("hhhh\n");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    printf("---------------\n");
    return RUN_ALL_TESTS();
}