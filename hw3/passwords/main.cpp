#include <iostream>
#include <stdio.h>

int main()
{
    long long int compareLogin1 = 111;
    long long int comparePassword1 = 123456;
    long long int compareLogin2 = 222;
    long long int comparePassword2 = 654321;
  
    long long int login, password;
  
    printf("Input login ");
    scanf("%lld", &login);
    printf("Input password ");
    scanf("%lld", &password);

    if (login == compareLogin1 && password == comparePassword1) {
        printf("Login and password are correct \n");
    } else if (login == compareLogin2 && password == comparePassword2) {
        printf("Login and password are correct \n");
    } else {
        printf("Login or password incorrect \n");
    }
}