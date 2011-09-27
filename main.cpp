#include <iostream>
#include "./fibonacci.h"

int main(int argc, char **arv)
{

    const int n = 40;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Fib(" << i << ") = ";
        std::cout << Fibonacci<n>::getValue(i) << std::endl;
    }
}
