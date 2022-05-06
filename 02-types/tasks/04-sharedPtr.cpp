#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> ptr) {
    (*ptr) = 20;
    std::cout << "Use count in foo() : " << ptr.use_count() << "\tptr address : " << ptr << "\n";
    std::cout << "Value inside foo() : " << *ptr << "\n"; 
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << "Use count in main() before foo() : " << number.use_count() << "\taddress : " << number.get() << "\n";
    std::cout << "Value pointed by pointer before foo() : " << *number << "\n";
    foo(number);
    std::cout << "Use count in main() after foo() : " << number.use_count() << "\taddress : " << number << "\n";
    std::cout << "Value after foo() : " << *number << "\n";

    return 0;
}
