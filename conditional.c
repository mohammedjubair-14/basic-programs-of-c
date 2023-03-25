#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter A and B value:");
    scanf("%d %d",&a,&b);
    c=a>b?a:b;
    printf("\n The greatest number is:%d",c);
    return 0;
}
