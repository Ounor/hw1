#include <iostream>

int main() {

    //task1
    for (int i = 1; i <= 10; ++i) {
        std::cout << 5*i << std::endl;
    }

    //task2

    int val;
    std::cout<<"Введите число: " ; //На экран выводится 'X = '
    std::cin >> val;


    //больше или меньше это число 7-ми.

    if (val > 7) {
        std::cout << val << " - больше 7-ми \n";
    } else if (val == 7) {
        std::cout << val << " - ранво 7-ми \n";
        return 0;
    } else {
        std::cout << val << "- меньше 7-ми \n";
    }

    if (val > 10) {
        std::cout << val << " - больше 10-ти \n";
    } else if (val == 10) {
        std::cout << val << " - ранво 10-ти \n";
    } else {
        std::cout << val << "- меньше 10-ти \n";
    }

    if (val%2) {
        std::cout << val << "- не делится на 2 \n";
    } else {
        std::cout << val << " - делится на 2 \n";
    }


    if (val%3) {
        std::cout << val << "- не делится на 3 \n";
    } else {
        std::cout << val << " - делится на 3 \n";
    }


}
