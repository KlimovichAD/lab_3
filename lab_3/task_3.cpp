//Напишите функцию вычисляющую факториал числа(число вводиться)
#include <iostream>

int main()
{
    int a;
    std::cout << "Enter any number: ";
    std::cin >> a;

    int result = 1;
    int orig;

    orig = a;

    if ( a < 0){
        std::cout << "Error, there are no negative factorials.";
    }
    else if (a == 0){
        std::cout << "Factorial of number 0 is 1";
    }
    else {
        for (; a > 0; --a) {
            result = result * a;
        }
        if (result <= 0){
            std::cout << "Error, too large number entered.";
        }
        else {
            std::cout << "Factorial of number " << orig << " is " << result << std::endl;
        }
    }

    return 0;
}