#include <iostream>
#include "math_utils.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    print_menu();
    std::cin >> N;
    std::cout << "Сумма чисел до N: " << sum_to_n(N) << "\n";
    std::cout << "Максимальная цифра числа N: " << max_digit(N) << "\n";
    if (is_prime(N))
    {
        std::cout << "Простое" << "\n";
    }
    else
    {
        std::cout << "Не является простым" << "\n";
    }
    return 0;
}