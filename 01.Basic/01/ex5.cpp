#include <iostream>
#include "math_operations.h"

int main(){
    int a,b;
    std::cout<<"Enter the first number: ";
    std::cin >> a;
    std::cout<<"Enter the second number: ";
    std::cin >> a;
    std::cout << math::add(a,b)<<std::endl;
    return 0;
}