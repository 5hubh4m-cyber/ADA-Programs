#include<stdio.h>
#include<conio.h>
int unique(int a[],int n);
void main()
{
	int i,a[20],n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(unique(a,n))
	{
		printf("Array contains only unique elements\n");
	}
	else
	{
		printf("Array contains duplicate elements\n");
	}
	getch();
}

int unique(int a[10],int n)
{
	int i,j;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				return (0);
			}
		}
	}
	return (1);
}
