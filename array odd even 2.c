#include<stdio.h>
int main()
{
    int a[100],n,i,e=0,o=0;
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the values:");
        scanf("%d",&a[i]);

        a[i]%2==0?e++:o++;
    }
    printf("\n Total no of even numbers:%d",e);
    printf("\n Total no of odd  numbers :%d",o);
    return 0;
}
