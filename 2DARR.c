#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n,m;
    printf("\n Enter the no of rows:");
    scanf("%d",&m);
    printf("\n Enter the no of columns:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the value of b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
           printf("\t%d",c[i][j]);
        }
    }
        printf("\n");
return 0;
    }
