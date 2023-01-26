#include <iostream>
#include <algorithm>

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

    // Задание 1
    for(int i = 0; i < rows; i++) {
        sort(arr[i], arr[i] + columns);
    }

  // //Задание 2
  //    for (int i = 0; i < n; i++) {
  //       int temp = arr[i][0];
  //       arr[i][0] = arr[i][m-1];
  //       arr[i][m-1] = temp;
  //   }
  
    cout << "Итоговый массив: " << endl;
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
