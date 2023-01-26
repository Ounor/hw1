#include <iostream>
#include <random>

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


     // Инициализируем генератор 
    random_device rd; 
    mt19937 gen(rd()); 
    // Пределы генерации
    uniform_int_distribution<> dis(-2, 7); 

  for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            arr[i][j] = dis(gen);
        }
    }


    cout << "Итговый массив: " << endl;
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
