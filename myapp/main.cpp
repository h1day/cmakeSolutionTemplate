#include <iostream>
#include "lib1.h"
#include "lib2.h"

int main() {
    std::cout << "Hello, world!" << std::endl;
    std::cout << "lib1_func(3, 4) = " << lib1_func(3, 4) << std::endl;
    std::cout << "lib2_func(5, 6) = " << lib2_func(5, 6) << std::endl;
    return 0;
}