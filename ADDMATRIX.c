#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	int m,n,c,d,first[10][10],second[10][10],sum[10][10];
	clock_t st,end,total_t;
	st=clock();
	printf("Enter the number of rows and columns:\n");
	scanf("%d %d",&m,&n);
	printf("Enter the elements of the first matrix:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&first[c][d]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&second[c][d]);
		}
	}
	printf("\nThe sum of the matrices is:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			sum[c][d]=first[c][d]+second[c][d];
			printf("%d\t",sum[c][d]);
		}
		printf("\n");
	}
	end=clock();
	total_t=(end-st)/CLK_TCK;
	printf("\nTime taken to add two matrices is %d\n",total_t);
	getch();
}
