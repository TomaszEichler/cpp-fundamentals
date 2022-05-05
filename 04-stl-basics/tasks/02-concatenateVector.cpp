#include <iostream>
#include <vector>

std::vector<int> concatenateVector(const std::vector<int>& v1,
                                   const std::vector<int>& v2) {
    std::vector<int> tmp_vec{};

    size_t sizeOfVectors = v1.size() + v2.size();
    tmp_vec.reserve(sizeOfVectors);

    size_t j = 0;
    size_t k = 0;

    for (size_t i = 0; i < sizeOfVectors; ++i) {
        if (i % 2) {
            if (k < v2.size()) {
                tmp_vec.push_back(v2[k]);
                k++;
            } else if (j < v1.size()) {
                tmp_vec.push_back(v1[j]);
                j++;
            }
        } else {
            if (j < v1.size()) {
                tmp_vec.push_back(v1[j]);
                j++;
            } else if(k < v2.size()) {
                tmp_vec.push_back(v2[k]);
                k++;
            }
        }
    }

    return tmp_vec;
}

int main() {
    std::vector<int> vec1{1,2, 3, 4, 5};
    std::vector<int> vec2{11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}