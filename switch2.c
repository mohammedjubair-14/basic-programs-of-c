#include<stdio.h>
int main()
{
    char c;
    printf("\n Enter the character:");
    scanf("%c",&c);
    switch(c)
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    {
        printf("%c is a vowel",c);break;
default:
        printf("%c is not vowel",c);break;
    }
return 0;
}



