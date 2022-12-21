#include <iostream>

int main() {

    // task1
    //1
    for (int i = 0; i < 9; i++) {
        std::cout << "Hello" << "\n";
    }

    //2 & 3
    for (int i = 0; i < 15; i++) {
        if (i%2) {
            std::cout << i << "\n";
        }
    }


    // task2
    int counter = 0;

    for (int i = 5; i < 15; i++) {
        counter += i;

    }

    std::cout << counter;
}