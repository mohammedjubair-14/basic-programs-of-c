#include<stdio.h>
int main()
{
    int a,b;
    printf("\n enter 2 value:");
    scanf("%d%d",&a,&b);
    printf("\n a:%d b:%d",a,b);//5 10
    a=a+b;//a=5+10=15,a=15
    b=a-b;//b=15-10=5,b=5
    a=a-b;//15-5=>10
    printf("\n a:%d b:%d",a,b);
    return 0;
}
