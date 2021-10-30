//Напишите функцию вычисляющую nый член фибоначи (f1 = 0, f2 = 1), n - натуральное
#include <iostream>

int main() {

    int fib1 = 0;
    int fib2 = 1;

    int n;
    std::cout << "Enter the Fibonacci series element number:";
    std::cin >> n;

    int fib_sum;

    int i = 0;
    if (n > 1) {
        while (i < n - 2) {
            fib_sum = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib_sum;
            i = ++i;
        }
        std::cout << "The " << n << "'s Fibonacci element: " << fib2 << std::endl;
    }
    else if (n == 1){
        std::cout << "The first fibonacci element: 0";
    }
    else std::cout << "Error. Data entered incorrectly.";


    return 0;
}