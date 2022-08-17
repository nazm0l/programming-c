#include<stdio.h>

int main()
{
    int result;

    printf("Please enter your result: ");
    scanf("%d", &result);

    if(result >= 80 && result <= 100)
    {
        printf("You got A+");

    } else if (result > 60 && result <=80)
    {
        printf("You got A");

    } else if (result > 40 && result <=60)
    {
        printf("You got B");

    } else
    {
        printf("You failed");
    }

    return 0;
}
