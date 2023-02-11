#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Введите кол-во элементов в массиве ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите все элементы массива: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-ый элемент: ";
        cin >> arr[i];
    }

    int min_val = arr[0];
    int max_val = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
        sum += arr[i];
    }

    int average = sum / n;

  cout << "Минимальное значение: " << min_val << endl;
    cout << "Максимальное значение: " << max_val << endl;
    cout << "Сумма всех элементов: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    delete[] arr;

    return 0;
}
