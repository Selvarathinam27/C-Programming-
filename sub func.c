#include<stdio.h>
void sub();                                               
int main()
{
  sub();                                                  
  return 0;
}
void sub()                                                
{
   int a,b,c;
   printf("\nEnter The Two values:");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("subtraction:%d",c);
}
