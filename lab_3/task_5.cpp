//Напишите функцию вычисляющую число в степени(степень >=0)
#include <iostream>

int main()
{
    int a;
    int b;
    int base;

    std::cout << "Enter any number: ";
    std::cin >> a;

    std::cout << "Enter degree: ";
    std::cin >> b;

    base = a;

    while(b > 1){
        a = a * base;
        b = --b;
    }

    if (b == 0){
        a = 1;
    }

    std::cout << "Result: " << a << std::endl;

    return 0;
}

