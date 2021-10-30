//Вводяться натуральные M,N.Посчитатайте сколько чисел в интервале (0,M) делиться на N
#include <iostream>
#include <cmath>

int main()
{
    int M;
    std::cout << "Please, enter the last member of interval: ";
    std::cin >> M;

    int N;
    std::cout << "Please, enter the divisor: ";
    std::cin >> N;

    int counter = 0;

    for (int start = 1; start <= abs(M); ++start) {
        if (start % abs(N) == 0) {
            counter = ++counter;
        }
    }
        std::cout << "The number of numbers in the interval (0," << M << "), divisible by " << N << " is " << counter << std::endl;

    return 0;

}
