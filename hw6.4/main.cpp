// Task 1

#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cout << "Введите слово: ";
  cin >> word;

  for (int i = 0; i < word.length() - 1; i++) {
    word[i] = word[i + 1];
  }

  word.pop_back(); 

  cout << "Новое слово: " << word << endl;

  return 0;
}


// Task 2


int main()
{
    string original_str, buffer_str;

    cout << "Введите слово: ";
    getline(cin, original_str);

    int length = original_str.length();

    for (int i = length - 1; i >= 0; i--)
    {
        buffer_str += original_str[i];
    }

    cout << "Слово наоборот: " << buffer_str << endl;

    return 0;
}
