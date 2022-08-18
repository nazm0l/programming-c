#include<stdio.h>

void main()
{
    int num1, num2, num3;

    printf(" Enter First, Second and Third Number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    {
        printf("Maximum Number: %d", num1);

    }else if(num2>num3 && num2>num1)
    {
        printf("Maximum Number: %d", num2);
    }else
    {
        printf("Maximum Number: %d", num3);
    }
}
