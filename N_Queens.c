#include<stdio.h>
#include<math.h>
 
int cb[20],count;
 
int main()
{
 int n,i,j;
 void nqueen(int row,int n);
 printf("\n\nEnter number of Queens:");
 scanf("%d",&n);
 nqueen(1,n);
 return 0;
}
 

void print(int n)
{
 int i,j;
 printf("\n\nSolution is %d:\n\n",++count);
 
 for(i=1;i<=n;++i)
  printf("\t%d",i);
 
 for(i=1;i<=n;++i)
 {
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) 
  {
   if(cb[i]==j)
    printf("\tQueen"); 
   else
    printf("\t-"); 
  }
 }
}
 

int position(int row,int column)
{
 int i;
 for(i=1;i<=row-1;++i)
 {
  
  if(cb[i]==column)
   return 0;
  else
   if(abs(cb[i]-column)==abs(i-row))
    return 0;
 }
 
 return 1; 
}
 

void nqueen(int row,int n)
{
 int column;
 for(column=1;column<=n;++column)
 {
  if(position(row,column))
  {
   cb[row]=column; 
   if(row==n) 
    print(n); 
   else 
    nqueen(row+1,n);
  }
 }
}