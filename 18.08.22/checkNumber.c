#include<stdio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number<0)
        printf("Number is Negative");
    else if(number == 0)
        printf("Number is Zero");
    else
        printf("Number is Positive");
}
