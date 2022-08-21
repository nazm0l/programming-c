/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/


#include<stdio.h>

int main()
{
    float physics, chemistry, biology, math, computer, percentage;

    printf("Enter physics mark: ");
    scanf("%f", &physics);

    printf("Enter chemistry mark: ");
    scanf("%f", &chemistry);

    printf("Enter biology mark: ");
    scanf("%f", &biology);

    printf("Enter math mark: ");
    scanf("%f", &math);

    printf("Enter computer mark: ");
    scanf("%f", &computer);

    percentage = (physics + chemistry + biology + math + computer)/5;

    if(percentage >= 90)
        printf("Your Grade A");
    else if(percentage >= 80)
        printf("Your Grade B");
    else if(percentage >= 70)
        printf("Your Grade C");
    else if(percentage >= 60)
        printf("Your Grade D");
    else if(percentage >= 40)
        printf("Your Grade E");
    else
        printf("Your Grade F means you are sucked");
}
