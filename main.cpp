#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> msg {"Hello", "C++", "Template", "World!"};

    for (const std::string& word : msg) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    // Add your amazing C++ code here!

    return 0;
}
