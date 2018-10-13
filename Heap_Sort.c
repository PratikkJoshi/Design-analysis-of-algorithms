#include<stdio.h>


int main()
{
       int heap[30],n,i,last,temp;

   printf("Enter no. of elements:");
   scanf("%d",&n);
   printf("\nEnter elements:");
     for(i=1;i<=n;i++)
      scanf("%d",&heap[i]);
   heap[0] = n;
   heap1(heap);
   while(heap[0] > 1)
    {
      last = heap[0];
      temp = heap[1];
      heap[1] = heap[last];
      heap[last] = temp;
      heap[0]--;
       heapSort(heap,1);
    }

       printf("\nElements after sorting:-\n");
       for(i=1;i <= n;i++)
        printf("%d ",heap[i]);

         return 0;
}

void heap1(int heap[])
  {
       int i,n;
       n=heap[0];
      for(i=n/2;i>=1;i--)
      heapSort(heap,i);
  }5

void heapSort(int heap[],int i)
 {
     int j,temp,n,flag=1;
     n=heap[0];
      while(2*i<=n && flag==1)
      {
        j=2*i;    
        if(j+1<=n && heap[j+1] > heap[j])
         j = j+1;
          if(heap[i] > heap[j])
          flag = 0;
          else
          {
	temp = heap[i];
	heap[i] = heap[j];
	heap[j] = temp;
	i=j;
           }
 }
}
