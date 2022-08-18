#include<stdio.h>

void main()
{
    char alphabet;

    printf("Enter a Alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
        printf("%c is Vowel", alphabet);
    else
        printf("%c is Consonant", alphabet);
}
