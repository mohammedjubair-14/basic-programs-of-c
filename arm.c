#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    printf("Enter the 3 digit no: ");
    scanf("%d",&n); //123
    a=n/10; //12
    b=n%10; //3
    c=a/10; //1
    d=a%10; //2
    e=((c*c*c)+(d*d*d)+(b*b*b));
    if(e==n)
    {
        printf("\n %d is a Armstrong number:",n);
    }
    else
    {
        printf("\n %d is not a Armstrong number:",n);
    }
    return 0;
}
