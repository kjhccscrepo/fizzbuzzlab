// sum100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    std::cout << sum;
    return 0;
}
