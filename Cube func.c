#include<stdio.h>
void cube();                                               
int main()
{
  cube();                                                  
  return 0;
}
void cube()                                                
{
   int a,c;
   printf("\nEnter The Two values:");
   scanf("%d",&a);
   c=a*a*a;
   printf("Cube:%d",c);
}
