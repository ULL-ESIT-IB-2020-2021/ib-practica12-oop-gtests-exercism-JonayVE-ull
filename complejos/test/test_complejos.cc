#include <gtest/gtest.h>

#include "complejos.h"
 
TEST(DateTest, Add){
    Complex c1{3,4};
    Complex c2{-3,8};
    Complex c3{6,-1};
    Complex result1;
    Complex result2;
    result1.Add(c1,c2);
    result2.Add(c1,c3);

    EXPECT_EQ(true, ((result1.GetReal() == 0)&&(result1.GetImaginary() == 12)));
    EXPECT_EQ(false, ((result2.GetReal() == 3)&&(result2.GetImaginary() == 9)));
    
}

TEST(DateTest, Sub){
    Complex c1{3,4};
    Complex c2{-3,8};
    Complex c3{6,-1};
    Complex result1;
    Complex result2;
    result1.Sub(c1,c2);
    result2.Sub(c1,c3);

    EXPECT_EQ(true, ((result1.GetReal() == 6)&&(result1.GetImaginary() == -4)));
    EXPECT_EQ(false, ((result2.GetReal() == 3)&&(result2.GetImaginary() == 9)));
    
}

TEST(DateTest, Multiplicate){
    Complex c1{3,4};
    Complex c2{-3,8};
    Complex c3{6,-1};
    Complex result1;
    Complex result2;
    result1.Multiplicate(c1,c2);
    result2.Multiplicate(c1,c3);

    EXPECT_EQ(true, ((result1.GetReal() == -41)&&(result1.GetImaginary() == 12)));
    EXPECT_EQ(false, ((result2.GetReal() == 3)&&(result2.GetImaginary() == 9)));
    
}

TEST(DateTest, Divide){
    Complex c1{3,4};
    Complex c2{-3,8};
    Complex c3{6,-1};
    Complex result1;
    Complex result2;
    result1.Divide(c1,c2);
    result2.Divide(c1,c3);

    EXPECT_EQ(false, ((result1.GetReal() == 21)&&(result1.GetImaginary() == 12)));
    EXPECT_EQ(false, ((result2.GetReal() == 3)&&(result2.GetImaginary() == 9)));
    
}
    
