#include<stdio.h>
 struct student
 {
     char *name;
     int age;
     float per;
 };
int main()
{

struct student j[2];

   j[0].name="Hatake kakashi";
   j[0].age=28;
   j[0].per=100;

   j[1].name="Mighty guy";
   j[1].age=28;
   j[1].per=100;

   printf("\n-------------------------------------");

        printf("\n Name : %s",j[0].name);
        printf("\n Age  : %d",j[0].age);
        printf("\n per  : %f",j[0].per);

    printf("\n ------------------------------------");

        printf("\n Name : %s",j[1].name);
        printf("\n Age  : %d",j[1].age);
        printf("\n per  : %f",j[1].per);

    printf("\n--------------------------------------");

    return 0;
 }
