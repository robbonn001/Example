#include <iostream>
#include <windows.h>
#include "Triangle.h" // Подключаем наш класс

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double s, h;

    std::cout << "Вычисление площади треугольника" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    try {
        std::cout << "Введите длину стороны треугольника: ";
        std::cin >> s;

        std::cout << "Введите высоту, опущенную на эту сторону: ";
        std::cin >> h;

        Triangle tri(s, h);

        std::cout << "Площадь треугольника равна: " << tri.calculateArea() << std::endl;

    }
    catch (std::invalid_argument e) {
        std::cerr << "Ошибка ввода: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}