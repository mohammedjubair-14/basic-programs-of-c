#include<stdio.h>
 void swap(int *x,int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }
  int main()
  {
      int a,b;
      printf("\n Enter the values:");
      scanf("%d%d",&a,&b);
      printf("before swap A;%d  B:%d",a,b);
      swap(&a,&b);
      printf("\n After swapping A:%d  B:%d",a,b);
      return 0;
  }
