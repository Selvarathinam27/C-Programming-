#include<stdio.h>
void mul();                                               
int main()
{
  mul();                                                  
  return 0;
}
void mul()                                                
{
   int a,b,c;
   printf("\nEnter The Two values:");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("Multiplication:%d",c);
}
