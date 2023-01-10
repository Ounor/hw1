
    int lenght;
    cout << "Введите длину массива: ";
    cin >> lenght;
  
    int randArray[lenght];
  
    for(int i=0;i<lenght;i++) {
     cout << "Введите число для добавления в массив: ";
     cin >> randArray[i];
     cout << endl;
    }

    for(int a=0;a<lenght;a++) {
      cout << randArray[a] << " ";
    }


