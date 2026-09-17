#include "Triangle.h"

Triangle::Triangle(double s, double h) {
    setSide(s);
    setHeight(h);
}

void Triangle::setSide(double s) {
    if (s <= 0) {
        throw std::invalid_argument("Длина стороны должна быть больше нуля.");
    }
    side = s;
}

void Triangle::setHeight(double h) {
    if (h <= 0) {
        throw std::invalid_argument("Высота должна быть больше нуля.");
    }
    height = h;
}

double Triangle::calculateArea() const {
    return 0.5 * side * height;
}
