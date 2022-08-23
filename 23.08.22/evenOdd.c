#include<stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    switch(num%2==1)
    {
    case 1:
        printf("Number is ODD");
        break;
    case 0:
        printf("Number is Even");
        break;
    default:
        printf("Enter valid number");
    }
}
