
    int lenght;
    cout << "Введите длину массива: ";
    cin >> lenght;
  
    int randArray[100];
  
    for(int i=0;i<lenght;i++) {
     cout << "Введите число для добавления в массив: ";
     cin >> randArray[i];
     cout << endl;
    }

    for(int a=0;a<lenght;a++) {
      cout << randArray[a] << " ";
    }


    int temp; // временная переменная для обмена элементов местами

    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete [] arr; // освобождение памяти;
