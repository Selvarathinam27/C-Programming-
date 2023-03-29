#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("The given year is leap year");
	}
	else
	{
		printf("The given Year is not an leap year");
	}
	return 0;
}
