#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int day,
        zodiac,
        month,
        year;

    cout << "Введите текущий день месяц и год\n";
    cout << "день: ";     cin >> day;
    cout << "месяц: ";    cin >> month;
    cout << "год: ";  cin >> year;

    const char *arrZodiakChina[12] = {"Крыса\n", "Бык\n", "Тигр\n", "Кролик\n", "Дракон\n", "Змея\n", "Лошадь\n", "Овца\n", "Обезьяна\n", "Петух\n", "Собака\n", "Свинья\n"};

    if (year%4 == 0) cout<<"Високосный\n" ;

    cout<< arrZodiakChina[month];
    
    zodiac=100*month+day;

    if(zodiac>=121 && zodiac<=219)   cout<<"Водолей\n" ;
    if(zodiac>=220 && zodiac<=320)   cout<<"Рыбы\n";
    if(zodiac>=321 && zodiac<=420)   cout<<"Овен\n";
    if(zodiac>=421 && zodiac<=521)   cout<<"Телец\n";
    if(zodiac>=522 && zodiac<=621)   cout<<"Близнецы\n";
    if(zodiac>=621 && zodiac<=722)   cout<<"Рак\n";
    if(zodiac>=723 && zodiac<=823)   cout<<"Лев\n";
    if(zodiac>=824 && zodiac<=923)   cout<<"Дева\n";
    if(zodiac>=924 && zodiac<=1023)  cout<<"Весы\n";
    if(zodiac>=1024 && zodiac<=1122) cout<<"Скорпион\n";
    if(zodiac>=1123 && zodiac<=1221) cout<<"Стрелец\n";
    if(zodiac>=1222 || zodiac<=120)  cout<<"Козерог\n";
}
