#include <iostream>

long long factorial(long long num)
{
    if (num == 0)
        return 1;
    if (num < 0)
        return 0;
    return factorial(num - 1) * num;
}

int main()
{
    std::cout << factorial(-3) << std::endl;
}
