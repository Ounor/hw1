#include <iostream>
using namespace std;

int main() {
    int quantity = 0;
    int sum = 0;

    cout << "Количество элементов: ";
    cin >> quantity;
 
    int *arrVal = new int[quantity];
 
    for (int i = 0; i < quantity; i++)
    {
        cout << " " << i + 1 << "-ый элемент - ";
        cin >> arrVal[i];
    }
 
    int minVal = arrVal[0];
    int maxVal = arrVal[0];
   
 
    for (int i = 0; i < quantity; i++)
    {
        if (arrVal[i] < minVal)
        {
            minVal = arrVal[i];
        }
        if (arrVal[i] > maxVal)
        {
            maxVal = arrVal[i];
        }
        sum += arrVal[i];
    }
 
     int average = sum / quantity;

    cout << "Сумма элементов - " << sum << " \n";
    cout << "Среднее арифметическое элементов - " << average << " \n";
    
    cout << "Максимумальное число - " << maxVal << " \n";
    cout << "Минимальное число - " << minVal << " \n";
}
