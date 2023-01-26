#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows:"    cin >> rows;
    cout << "Enter the number of columns:"    cin >> columns;

    int arr[rows][columns];

    // Input array elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << "Enter element at position" << i << j
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "The 2D array is: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
