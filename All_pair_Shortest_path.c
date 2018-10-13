#include<stdlib.h>
#include<stdio.h>
int c[100][100], p[100][100];
int inf=1000, v;
void show();
void path(int, int);
int main()
{
 int i, j, k, x;
 printf("Enter the number of vertices in the graph: ");
 scanf("%d", &v);
 printf("\nEnter adjacency matrix:\n");
 printf("(Enter 1000 if there is no path)\n");
 for(i=1;i<=v;i++)
  for(j=1;j<=v;j++)
  {
   scanf("%d", &c[i][j]);
   p[i][j]=-1;
  }
printf("\n");
 for(k=1;k<=v;k++)
 {
  for(i=1;i<=v;i++)
  {
   for(j=1;j<=v;j++)
   {
    if(i==j)
     c[i][j]=0;
    else
    {
     x=c[i][k]+c[k][j];
     if(c[i][j]>x)
     {
      c[i][j]=x;
      p[i][j]=k;
     }
    }
   }
  }
  show();
  printf("\n");
 }
 printf("From\tTo\tPath\t\tTotal Min. Cost\n");
for(i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
  {
   if(i!=j)
   {
    printf("%d\t%d\t%d", i,j,i);
    path(i,j);
    printf("%d\t\t%d\n", j,c[i][j]);
   }
  }
 }
 return 0;
}

void show()
{
 int i,j;
 for(i=1;i<=v;i++)
 {
  for(j=1;j<=v;j++)
   if(c[i][j]==1000)
    printf("INF\t");
   else
    printf("%d\t", c[i][j]);
  printf("\n");
 }
}

void path(int i, int j)
{
 int k;
 k=p[i][j];
 if(k==-1)
 {
  printf("->");
  return;
 }
 path(i, k);
 printf("%d",k);
 path(k,j);
}	
