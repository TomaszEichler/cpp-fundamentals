#include <iostream>
#include <memory>   // fot std::shared_ptr
// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.


std::shared_ptr<int> calculateProduct(const int first, const int second) {
    int result {first + second};
    std::shared_ptr<int> ptr = std::make_shared<int>(result);
    std::cout << "number: " << *ptr << " | owners: " << ptr.use_count() << "\n"; 
    
    return ptr;
    //return std::make_shared<int>(result); najkrótsza forma
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
