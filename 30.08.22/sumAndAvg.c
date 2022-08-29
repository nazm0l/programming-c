#include<stdio.h>

int main()
{
    float sum=0, n;

    for(int i=1;i<=10;i++)
    {
        scanf("%f", &n);
        sum+=n;
    }
    printf("Sum: %f\n", sum);

    float avg = sum/10;

    printf("Average: %f", avg);
}
