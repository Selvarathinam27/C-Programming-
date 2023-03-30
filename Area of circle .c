#include<stdio.h>
void area();                                               
int main()
{
   area();                                                  
  return 0;
}
void area()                                               
{
   int r,a,c,d;
   printf("Enter the radius:");
   scanf("%d",&r);
   d=r*2;
   printf("\nDiameter of circle:%d",d);
   c=2*3.14*r;
   printf("\ncirumference of circle :%d %f",c);
   a=3.14*r*r;
   printf("\nArea of circle %d %f",a);
   
}
