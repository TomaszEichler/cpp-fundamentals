#include <iostream>
#include <vector>
#include <string>

void printVector(const std::vector<std::string>& v) {
    for(const auto& el : v) {
        std::cout << el << "\n";
    }
}

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}