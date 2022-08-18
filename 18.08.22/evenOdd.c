#include<stdio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2 == 1)
        printf("Number is ODD");

    else
        printf("Number is Even");
}
