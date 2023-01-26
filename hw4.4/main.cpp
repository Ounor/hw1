#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите кол-во элементов в массиве ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "-ый элемент: ";
        cin >> arr[i];
    }

    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double mean = (double)sum / n;

    cout << "Минимальное значение: " << minVal << endl;
    cout << "Максимальное значение: " << maxVal << endl;
    cout << "Сумма всех элементов: " << sum << endl;
    cout << "Среднее арифметическое: " << mean << endl;

    return 0;
}
