/*************************************************************************
	> File Name: main.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 24 Dec 2020 02:54:13 PM CST
 ************************************************************************/
#include <stdio.h>
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(func, add) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(2, 4), 7);
    EXPECT_EQ(add(2, 4), 6);
}

TEST(func, add2) {
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(3, -2), 1);
}

TEST(f, uncadd) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(12, -12), 0);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
