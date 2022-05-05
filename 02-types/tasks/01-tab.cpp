#include <iostream>

constexpr size_t tabSize = 100;

int main() {
    int tab[tabSize]{};

    for (int i = 0, j = 0; j < tabSize; ++i) {
        if (i % 2) {
            tab[j] = i;
            j++;
        }
    }

    for (int i = 0; i < tabSize; ++i) {
        std::cout << tab[i] << "\t";
    }
    std::cout << "\n";

    return 0;
}