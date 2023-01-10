#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Количество элементов: ";
  cin >> n;

  int arr[100];
  for (int i = 0; i < n; ++i) {
    cout << i + 1 << "-ый элемент: ";
    cin >> arr[i];
  }

  cout << "Твой массив: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = 1; i < n; ++i) {
    for (int r = 0; r < n - i; r++) {
      if (arr[r] < arr[r + 1]) {
        int temp = arr[r];
        arr[r] = arr[r + 1];
        arr[r + 1] = temp;
      }
    }
  }

  cout << "Сортировка пузырьком: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
