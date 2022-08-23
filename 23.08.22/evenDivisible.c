#include<stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num%2==1)
    {
        if(num%3==0)
        {
            printf("Number is ODD and Divisible by 3");
        }else
        {
            printf("Number is ODD but not divisible by 3");
        }
    }else if(num%2==0)
    {
        if(num%4==0)
        {
            printf("Number is Even and Divisible by 4");
        }else
        {
            printf("Number is Even but not divisible by 4");
        }
    }else
    {
        printf("Please input a valid number");
    }
}
