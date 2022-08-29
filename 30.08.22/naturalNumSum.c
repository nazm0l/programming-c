#include<stdio.h>

int main()
{
    int i, sum, n;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n", i);
        sum+=i;
    }
    printf("Natural Numbers Sum: %d\n", sum);
}

