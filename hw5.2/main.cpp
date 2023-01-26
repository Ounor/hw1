#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Введите количество строк:";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;

    int** arr = new int*[rows]; 
    for(int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << "Введите элемент массива в положение [" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
    }


    cout << "Двумерный массив: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
