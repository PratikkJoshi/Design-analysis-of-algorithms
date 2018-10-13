#include <stdio.h>

#define max 10

int a[11] = {1,25,14,42,68,12,15,35,0,84,900};
int b[10];

void mergeSort(int low, int mid, int high) 
{
   int n1, n2, i;
 for(n1 = low, n2 = mid + 1, i = low; n1 <= mid && n2 <= high; i++) {
      if(a[n1] <= a[n2])
         b[i] = a[n1++];
      else
         b[i] = a[n2++];
   }
   
   while(n1 <= mid)    
      b[i++] = a[n1++];

   while(n2 <= high)   
      b[i++] = a[n2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void msort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      msort(low, mid);
      msort(mid+1, high);
      mergeSort(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;

  printf("\nElements before Sorting:-\n");
    for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
       msort(0, max);
     printf("\nElements after sorting:-\n");
   for(i = 0; i <= max; i++)
     printf("%d ", a[i]);
     printf("\n");
}
