#include <stdio.h> 
#include <math.h> 


void insertionSort(int arr[], int n) 
{ 
 int el,i,j; 
  for (i = 1; i < n; i++) 
 { 
    el = arr[i]; 
    j = i-1; 
   while (j >= 0 && arr[j] > el) 
       { 
         arr[j+1] = arr[j]; 
         j = j-1; 
          arr[j+1] = el; 
       } 
 } 
}
int main() 
{ 
  int i;
   int arr[] = {23,45,12,14,1,6,15,24,90,50}; 
   int n = sizeof(arr)/sizeof(arr[0]); 
   insertionSort(arr, n); 
   for (i=0; i < n; i++) 
   printf("%d ", arr[i],"\n");
   return 0; 
} 

