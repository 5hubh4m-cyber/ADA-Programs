#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int a[20],n;
void read_data();
void quick_sort(int,int);
int partition(int,int);
void display_data();
void main()
{
	clock_t st,end,total_t;
	st=clock();
	read_data();
	quick_sort(0,n-1);
	display_data();
	end=clock();
	total_t=(end-st)/CLK_TCK;
	printf("Time taken to sort is:  %ld\n",total_t);
	getch();
}
void read_data()
{
	int i;
	printf("Enter the value for n\n");
	scanf("%d",&n);
	printf("Enter the numbers for sorting:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void quick_sort(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=partition(low,high);
		quick_sort(low,mid-1);
		quick_sort(mid+1,high);
	}
}
int partition(int low,int high)
{
	int i,j,temp,key;
	key=a[low];
	i=low+1;
	j=high;
	while(1)
	{
		while(i<high && key>=a[i])
		{
			i++;
		}
		while(key<a[j])
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			temp=a[low];
			a[low]=a[j];
			a[j]=temp;
			return j;
		}
	}
}
void display_data()
{
	int i;
	printf("\nThe sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
