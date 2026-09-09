#include <iostream>
#include <windows.h> // Для SetConsoleOutputCP

int main() {
    // Устанавливаем кодировку вывода в UTF-8 для корректного отображения кириллицы
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double side, height;

    std::cout << "Вычисление площади треугольника" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << "Введите длину стороны треугольника: ";
    std::cin >> side;

    std::cout << "Введите высоту, опущенную на эту сторону: ";
    std::cin >> height;

    double area = 0.5 * side * height;

    std::cout << "Площадь треугольника равна: " << area << std::endl;

    return 0;
}