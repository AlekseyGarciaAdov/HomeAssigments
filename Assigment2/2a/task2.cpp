#include <iostream>
#include <fstream>
#include <vector>

int main() {
    const char* filename = "example.txt";
    std::ifstream file(filename, std::ios_base::binary | std::ios_base::ate);
    std::streamsize filesize = file.tellg();
    file.seekg(0, std::ios_base::beg);
    std::vector<char> data(filesize);
    file.read(data.data(), filesize);
    file.close();

    size_t n = data.size(); 
    for (size_t i = 0; i < n / 2; ++i) {  
        std::swap(data[i], data[n - 1 - i]);  
    }

    const char* gilename = "example2.txt";
    std::ofstream gile(gilename, std::ios_base::binary);
    gile.write(data.data(), filesize);
    gile.close();

    return 0;
}
