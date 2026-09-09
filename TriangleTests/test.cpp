#include "pch.h"
#include "Triangle.h"

// Тест корректного создания объекта и расчета площади
TEST(TriangleTest, CalculateAreaValid) {
    Triangle tri(10.0, 5.0);
    EXPECT_DOUBLE_EQ(tri.calculateArea(), 25.0);
}

// Тест проверки стороны на положительность
TEST(TriangleTest, InvalidSide) {
    EXPECT_THROW(Triangle tri(-5.0, 10.0), const char*);
}

// Тест проверки высоты на положительность
TEST(TriangleTest, InvalidHeight) {
    EXPECT_THROW(Triangle tri(10.0, -5.0), const char*);
}

// Тест проверки на ноль
TEST(TriangleTest, ZeroValues) {
    EXPECT_THROW(Triangle tri(0.0, 10.0), const char*);
    EXPECT_THROW(Triangle tri(10.0, 0.0), const char*);
}

// Тест геттеров и сеттеров
TEST(TriangleTest, GettersAndSetters) {
    Triangle tri(4.0, 6.0);
    EXPECT_DOUBLE_EQ(tri.getSide(), 4.0);
    EXPECT_DOUBLE_EQ(tri.getHeight(), 6.0);

    tri.setSide(8.0);
    EXPECT_DOUBLE_EQ(tri.getSide(), 8.0);
}