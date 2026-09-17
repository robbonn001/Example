#pragma once
#include <iostream>

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double s, double h);
    double getSide() const;
    double getHeight() const;
    void setSide(double s);
    void setHeight(double h);
    double calculateArea() const;
};

inline double Triangle::getSide() const { return side; }
inline double Triangle::getHeight() const { return height; }