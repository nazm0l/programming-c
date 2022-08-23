#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    switch(num == 0)
    {
    case 1:
        printf("Number is Zero");
        break;
    case 0:
        switch(num>0)
        {
        case 1:
            printf("Number is Positive");
            break;
        case 0:
            printf("Number is Negative");
            break;
        }
        break;
    default:
        printf("Enter valid number");
    }
}
