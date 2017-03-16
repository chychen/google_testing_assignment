#include "gtest/gtest.h"
#include "assignment_1.h"

// Weak Form
TEST(TriangleTest, WeakFormTesting){
    // weak normal part
    EXPECT_EQ(Triangle(5, 5, 5), "Equilateral");
    EXPECT_EQ(Triangle(2, 2, 3), "Isosceles");
    EXPECT_EQ(Triangle(3, 4, 5), "Scalene");
    EXPECT_EQ(Triangle(4, 1, 2), "Not a triangle");
    // weak robust part
    EXPECT_EQ(Triangle(-1, 5, 5), "Value if a is not in the range of permitted values");
    EXPECT_EQ(Triangle(5, -1, 5), "Value if b is not in the range of permitted values");
    EXPECT_EQ(Triangle(5, 5, -1), "Value if c is not in the range of permitted values");
    EXPECT_EQ(Triangle(201, 5, 5), "Value if a is not in the range of permitted values");
    EXPECT_EQ(Triangle(5, 201, 5), "Value if b is not in the range of permitted values");
    EXPECT_EQ(Triangle(5, 5, 201), "Value if c is not in the range of permitted values");
}