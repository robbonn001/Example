#pragma once

#include <iostream>
#include <stdexcept>

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double s, double h);
    double getSide() const noexcept { return side; }
    double getHeight() const noexcept { return height; }
    double calculateArea() const noexcept { return 0.5 * side * height; }
    void setSide(double s);
    void setHeight(double h);
};