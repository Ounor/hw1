#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
    int firstValue,secondValue;
    
    printf("Input first number - ");
    scanf("%i", &firstValue);
    printf("Input second number - ");
    scanf("%i", &secondValue);

    if (firstValue < secondValue) {
        printf("is less\n");
    } else if (firstValue > secondValue) {
        printf("is greater\n");
    } else  {
        printf("the numbers are equal");
    }
}
