#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <gtest/gtest.h>
#include <iostream>

// 一个简单的测试用例
TEST(SampleTest, Addition)
{
    BOOST_LOG_TRIVIAL(info) << "这是 info 日志";
    BOOST_LOG_TRIVIAL(warning) << "这是 warning 日志";
    BOOST_LOG_TRIVIAL(error) << "这是  请求 error 日志";
    std::cout << "你好,我的朋友\n";
    EXPECT_EQ(1 + 1, 2);
    EXPECT_TRUE(2 > 1);
    printf("hhwwwwwwwhh\n");
}

TEST(SampleTest, Addition1)
{
    EXPECT_EQ(1 + 1, 2);
    EXPECT_TRUE(2 > 1);
    printf("hhhh\n");
}

int main(int argc, char **argv)
{
    system("chcp 65001 > nul");
    boost::log::add_file_log(boost::log::keywords::file_name = "test_log.txt",
                             boost::log::keywords::format = "[%TimeStamp%] [%Severity%]: %Message%");
    boost::log::add_common_attributes();

    ::testing::InitGoogleTest(&argc, argv);
    printf("---------------\n");
    return RUN_ALL_TESTS();
}