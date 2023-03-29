#include<stdio.h>
int main()
{
	int i,sum=0,n;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum=sum+i;
        
	}
	printf("The sum of first n natural number%d ",sum);
	return 0;
}
