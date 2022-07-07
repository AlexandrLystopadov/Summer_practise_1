#include "pch.h"
#include"..\\Summer_practise_1\test.c"



TEST(Test1Kol, KOL1) {
  EXPECT_EQ(test_point_search(2, 1, 2), 13);
  EXPECT_TRUE(true);
}

TEST(Test2Kol, KOL2) {
	EXPECT_EQ(test_point_search(3.46, 11.71, -10.25), 37);
	EXPECT_TRUE(true);
}

TEST(Test3Kol, KOL3) {
	EXPECT_EQ(test_point_search(-4, 1, 2), 0);
	EXPECT_TRUE(true);
}

TEST(Test4Kol, KOL4) {
	EXPECT_EQ(test_point_search(4.87, -12, 15.68), 75);
	EXPECT_TRUE(true);
}