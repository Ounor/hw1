#include <iostream>


int main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    std::cout << "Сумма чисел от 1 до 10 = " << sum;
    return 0;
}
