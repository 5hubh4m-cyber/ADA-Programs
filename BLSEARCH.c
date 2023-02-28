#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int lsearch(int n,int list[],int key);
int rbinary_search(int[],int,int,int);
void main()
{
  int key,ch,i,n,a[100],list[30],pos=0,flag;
  clock_t st,end,total_t;
  printf("1) Linear Search\n");
  printf("2) Binary Search\n");
  printf("3) Exit\n");
  printf("Enter your choice:\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:st=clock();
	   printf("Enter the size of the list:\n");
	   scanf("%d",&n);
	   printf("Enter the elements of the list:\n");
	   for(i=0;i<n;i++)
	   {
	     scanf("%d",&list[i]);
	   }
	   printf("Enter the element to be searched:\n");
	   scanf("%d",&key);
	   flag=lsearch(n,list,key);
	   if(flag==-1)
	   {
	     printf("Search unsuccessful\n");
	   }
	   else
	   {
	     printf("Search successful at position %d\n",flag+1);
	   }
	   end=clock();
	   total_t=(end-st)/CLK_TCK;
	   printf("Time taken for searching is %d\n",total_t);
	   break;

    case 2:st=clock();
	   printf("Enter the size of the array:\n");
	   scanf("%d",&n);
	   printf("Enter the array elements:\n");
	   for(i=0;i<n;i++)
	   {
	     scanf("%d",&a[i]);
	   }
	   printf("Array elements are:\n");
	   for(i=0;i<n;i++)
	   {
	     printf("%d\t",a[i]);
	   }
	   printf("Enter the key to be searched:\n");
	   scanf("%d",&key);
	   pos=rbinary_search(a,key,0,n-1);
	   if(pos==-1)
	   {
	     printf("key not found\n");
	   }
	   else
	   {
	     printf("key found at position %d\n",pos);
	   }
	   end=clock();
	   total_t=(end-st)/CLK_TCK;
	   printf("Time taken for searching is %d\n",total_t);
	   break;

    case 3:exit(0);
	   break;

    default:printf("Enter only 1,2 or 3\n");
  }
  getch();
}

int rbinary_search(int a[100],int key,int low,int high)
{
  int mid;
  if(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
    {
      return (mid+1);
    }
    if(key<a[mid])
    {
      return (rbinary_search(a,key,low,mid-1));
    }
    else
    {
      return (rbinary_search(a,key,mid+1,high));
    }
  }
  return -1;
}

int lsearch(int n,int list[30],int key)
{
  if(n<0)
  {
    return -1;
  }
  if(list[n-1]==key)
  {
    return n-1;
  }
  return (lsearch(n-1,list,key));
}
