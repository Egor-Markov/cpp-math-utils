#include <iostream>
#include <cmath>
#include "math_utils.h"

int sum_to_n(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    return sum;
}

int max_digit(int N)
{
    int max_n = 0;
    while (N > 0)
    {
        if (N % 10 > max_n)
        {
            max_n = N % 10;
        }
        N /= 10;
    }
    return max_n;
}

bool is_prime(int N)
{
    if (N <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }

    return true;
}

void print_menu()
{
    std::cout << "========================================\n";
    std::cout << "   Математические утилиты\n";
    std::cout << "========================================\n";
    std::cout << "Введите целое число N, и программа покажет:\n";
    std::cout << "1. Сумму чисел от 1 до N\n";
    std::cout << "2. Максимальную цифру в числе N\n";
    std::cout << "3. Является ли N простым числом\n";
    std::cout << "========================================\n";
    std::cout << "Введите N: ";
}