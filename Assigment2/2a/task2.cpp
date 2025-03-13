#include <iostream>
#include <fstream>

int main() {
    const char* filename = "example.txt";
    std::ifstream file(filename, std::ios_base::binary | std::ios_base::ate);
    
    if (!file) {
        std::cerr << "Error: Unable to open file " << filename << '\n';
        return 1;
    }

    std::streamsize filesize = file.tellg();
    if (filesize <= 0) {
        std::cerr << "Error: File is empty or inaccessible." << '\n';
        return 1;
    }

    file.seekg(0, std::ios_base::beg);

    char* data = new char[filesize];
    if (!file.read(data, filesize)) {
        std::cerr << "Error: Failed to read file." << '\n';
        delete[] data;
        return 1;
    }
    file.close();

    size_t n = static_cast<size_t>(filesize);
    for (size_t i = 0; i < n / 2; ++i) {
        std::swap(data[i], data[n - 1 - i]);
    }

    const char* filename2 = "example2.txt";
    std::ofstream file2(filename2, std::ios_base::binary);

    if (!file2) {
        std::cerr << "Error: Unable to open file " << filename2 << " for writing." << '\n';
        delete[] data;
        return 1;
    }

    if (!file2.write(data, filesize)) {
        std::cerr << "Error: Failed to write to file." << '\n';
        delete[] data;
        return 1;
    }
    file2.close();

    delete[] data;
    std::cout << "File reversed and saved successfully." << '\n';
    return 0;
}

