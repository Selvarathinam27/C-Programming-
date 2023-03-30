#include<stdio.h>
void div();                                               
int main()
{
  div();                                                  
  return 0;
}
void div()                                                
{
   int a,b,c;
   printf("\nEnter The Two values:");
   scanf("%d%d",&a,&b);
   c=a/b;
   printf("Division:%d",c);
}
