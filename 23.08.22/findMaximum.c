#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Two Number: ");
    scanf("%d %d", &num1, &num2);

    switch(num1>num2)
    {
    case 1:
        printf("%d is Big", num1);
        break;
    case 0:
        printf("%d is Big", num2);
    }
}
