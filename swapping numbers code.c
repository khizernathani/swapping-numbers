#include<stdio.h>
int main()
{
 int a=10, b=20;
 printf("The two numbers are: a=%d b=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nThe swapped numbers are : a=%d b=%d",a,b);
 return 0;
} 
