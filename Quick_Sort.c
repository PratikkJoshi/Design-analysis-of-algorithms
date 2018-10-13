#include<stdio.h>
void quicksort(int ele[50],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last){
     pivot=first;
     i=first;
     j=last;
   while(i < j){
      while(ele[i] <= ele[pivot] && i < last)
            i++;
       while(ele[j] > ele[pivot])
            j--;
         if(i < j)
         {
            temp = ele[i];
            ele[i] = ele[j];
            ele[j] = temp;
       }
   }

      temp = ele[pivot];
      ele[pivot] = ele[j];
      ele[j] = temp;
      quicksort(ele, first, j-1);
      quicksort(ele, j+1, last);
  }
}
  
   int main(){
   int i,n,ele[50];
   printf("How many elements do you want to enter :- ");
   scanf("%d",&n);.
   printf("Enter %d elements: ", n);
   for(i = 0;i <n;i++)
   scanf("%d",&ele[i]);
   quicksort(ele,0,n-1);
   printf("Sorted elements are:-");
   for(i=0;i < n;i++)
   printf(" %d",ele[i]);
   return 0;
}
