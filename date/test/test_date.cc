#include <gtest/gtest.h>

#include "fechas.h"
 
TEST(DateTest, greater){
    Date d1{1, 12, 20};
    Date d2{2, 12, 20};
    Date d3{1, 11, 20};

    EXPECT_EQ(true, d2 > d1);
    EXPECT_EQ(false, d3 > d1);
}

TEST(DateTest, equal){
    Date d1{1, 12, 20};
    Date d2{1, 12, 20};

    Date d3{2, 12, 20};
    Date d4{1, 11, 20};
    Date d5{1, 12, 20};

    EXPECT_EQ(true, d1 == d2);
    EXPECT_EQ(false, d1 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(true, d1 == d5);
}

TEST(DateTest, lower){
    Date d1{1, 12, 20};
    Date d2{2, 12, 20};
    Date d3{3, 11, 20};

    EXPECT_EQ(true, d1 < d2 );
    EXPECT_EQ(false, d1 < d1);
}
