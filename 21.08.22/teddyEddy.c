#include<stdio.h>

/*
Teddy and Eddy

teddy want to big

teddy = x
eddy = y

teddy <= eddy

after every year teddy * 3;

eddy * 2;

teddy = 2kg
eddy = 9kg


*/

int main()
{
    int x, y;

    printf("");
    scanf("%d %d", &x, &y);

    int count = 0;
    while(x<=y){
        x *= 3;
        y *= 2;

        count++;
    }
    printf("Total year: %d", count);

}
