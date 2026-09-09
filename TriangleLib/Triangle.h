#pragma once

#include <iostream>

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double s, double h) {
        setSide(s);
        setHeight(h);
    }

    double getSide() const { return side; }
    double getHeight() const { return height; }

    void setSide(double s) {
        if (s <= 0) {
            throw "Длина стороны должна быть больше нуля.";
        }
        side = s;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw "Высота должна быть больше нуля.";
        }
        height = h;
    }

    double calculateArea() const {
        return 0.5 * side * height;
    }
};