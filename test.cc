// Name: Grecia Cabrera
// ID: 821201902
#include <string>
#include <iostream>
#include <cstdint>

void double_it(int& x){
    x = x * 2;
    std::cout << "x is " << x << "\n";
}

void double_it_pointer (int x){
    std::uintptr_t y = reinterpret_cast<std::uintptr_t>(x);
    *x = *x * 2;
    std::cout << "x is " << x << "\n";
}

int main() {
    int value [] = {9, 7, 13, 19, 23};
    std::cout << "value is " << value << "\n";
    double_it_pointer(&value);
    std::cout << "value is " << value << "\n";
}