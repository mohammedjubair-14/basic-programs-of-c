#include<stdio.h>
int main()
{

    char str[100];
    int i,a=0,n=0,s=0;
    printf("\n enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65&&str[i]<=90) || (str[i]>=97&&str[i]<=122))
        a++;
        else if
            (str[i]>=48&&str[i]<=57)
            n++;
        else
            s++;
    }
    printf("\n total alphabets :%d",a);
    printf("\n total numbers   ;%d",n);
    printf("\n total special characters :%d",s);
    return 0;
}
