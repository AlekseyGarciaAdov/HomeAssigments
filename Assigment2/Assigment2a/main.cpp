/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment2a"*/

#include <iostream>
//#include "text_file_operations.h"
#include "rpn_calculator.h"

int main() {
    // Часть 1: Обработка текстового файла
    const std::string inputFile = "input.txt"; // Имя входного текстового файла
    const std::string outputFile = "output.txt"; // Имя выходного файла

    reverseTextFile(inputFile, outputFile);

    // Часть 2: Вычисление выражения в обратной польской записи
    std::string expression;
    std::cout << "Введите выражение в обратной польской записи: ";
    std::getline(std::cin, expression);

    try {
        double result = calculateRPN(expression);
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
