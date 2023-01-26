  // Задание 1

  #include <iostream>

  #include <string>

  int main() {

    std::string word;
    std::cout << "Введите слово: ";
    std::cin >> word;
    std::cout << "Второй символ этого слова - это:" << word[1] << std::endl;
    return 0;

  }

  // Задание 2

  #include <iostream>

  int main() {
    char array[] = {
      'H',
      'e',
      'l',
      'l',
      'o'
    };
    std::cout << "Последним элементом строки является: " << array[4] << std::endl;

    char temp = array[1];
    array[1] = array[3];
    array[3] = temp;
    std::cout << "Измененная строка: " << array << std::endl;

    return 0;
  }

  // Задание 3

  #include <iostream>

  #include <string>

  using namespace std;

  void delete_char(string & word, int index) {
    word.erase(index, 1);
  }

  int main() {
    string word = "Hello";

    int nChar;
    std::cout << "Введите порядковый номер символа для удаления: ";
    std::cin >> nChar;

    delete_char(word, nChar);
    cout << word << endl;

    return 0;
  }
