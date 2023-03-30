#include<stdio.h>
int main()
{ 
    int m,n,c,d,first[10][10],second[10][10],sum[10][10];
    printf("Enter the No of Rows and Columns in the Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the First matrix:\n");
    for(c=0;c<m;c++)
    {
    	for (d=0;d<n;d++)
    	{
    		scanf("%d",&first[c][d]);
		}        
	}
	print("Enter the Second Matrix:\n");
	for(c=0;c<m;c++)
    {
    	for (d=0;d<n;d++)
    	{
    		scanf("%d",&second[c][d]);
		}        
	}
	printf("Adding of two matrix:\n");
	for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    return 0;	
}
