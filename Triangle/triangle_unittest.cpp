#include "gtest/gtest.h"
#include "triangle.h"

TEST(getTriangleTypeTest, Boundary){
    EXPECT_EQ(getTriangleType(100, 100, 1), "Isosceles");
}