#include<stdio.h>
#include<conio.h>
int n,cost[10][10],d[10][10];
void dist();
void read_data();
void write_data();
int min(int a,int b)
{
return a<b ? a:b;
}
void write_data()
{
int i,j;
printf("the distance matrix is shown below\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 printf("%d ",d[i][j]);
printf("\n");
}
}
void read_data()
{
int i,j;
printf("enter the number of nodes\n");
scanf("%d",&n);
printf("enter the cost adjacency matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 scanf("%d",&cost[i][j]);
}
}
void dist()
{
int i,j,k;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 d[i][j]=cost[i][j];
}
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
}
}
void main()
{
read_data();
dist();
write_data();
}