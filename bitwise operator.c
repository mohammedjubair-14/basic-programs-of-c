 #include<stdio.h>
 int main()
 {
     int a=10,b=11,c,d;
     printf("\n Bitwise AND :%d",(a&b));
     printf("\n Bitwise OR  :%d",(a|b));
     printf("\n Bitwise XOR :%d",(a^b));
     printf("\n Bitwise NOR ;%d",(~a));
     a=10;
     b=a<<2;
     c=a>>2;
     printf("\n left shift  :%d",b);
     printf("\n Right shift :%d",c );
     return 0;
 }
