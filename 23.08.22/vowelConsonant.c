#include<stdio.h>

int main()
{
    char ch;

    printf("Input a Character: ");
    scanf("%c", &ch);

    switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    case 1:
        printf("Vowel");
        break;
    case 0:
        printf("Consonant");
        break;
    default:
        printf("Enter valid Char");
    }
}
