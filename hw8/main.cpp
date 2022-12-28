#include <iostream>


int main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    std::cout << "Сумма чисел от 1 до 100 = " << sum;
    return 0;
}
