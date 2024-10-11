/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment2a"*/

#include "text_file_operations.h"
#include <fstream>
#include <iostream>
#include <vector>

void reverseTextFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile, std::ios::binary);
    if (!inFile) {
        std::cerr << "Ошибка открытия входного файла!" << std::endl;
        return;
    }

    // Получаем размер файла
    inFile.seekg(0, std::ios::end);
    std::streamsize size = inFile.tellg();
    inFile.seekg(0, std::ios::beg);

    // Выделяем массив для данных
    std::vector<char> buffer(size);
    if (!inFile.read(buffer.data(), size)) {
        std::cerr << "Ошибка чтения файла!" << std::endl;
        return;
    }

    // Разворачиваем массив
    for (std::size_t i = 0; i < size / 2; ++i) {
        std::swap(buffer[i], buffer[size - i - 1]);
    }

    // Записываем в новый файл
    std::ofstream outFile(outputFile, std::ios::binary);
    if (!outFile) {
        std::cerr << "Ошибка открытия выходного файла!" << std::endl;
        return;
    }

    outFile.write(buffer.data(), size);
    outFile.close();
    std::cout << "Файл успешно развернут и записан в " << outputFile << std::endl;
}
