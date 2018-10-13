#include<stdio.h>

int Binary_Search(int arr[],int low, int high,int x)
{
   if(high>=low)
     {
       int mid = low + (high - low)/2;
       if(arr[mid] == x)
       return mid;

          if(arr[mid] > x)
          return Binary_Search(arr,low,mid-1,x);
              return Binary_Search(arr,mid+1,high,x);    
                }
                   return -1;
}

int main()
{ int x;
int arr[] = {6,8,2,1,9,14,11};
int n = sizeof(arr)/ sizeof(arr[0]);
printf("Search the element:-");
scanf("%d",&x);
int result = Binary_Search(arr,0,n-1,x);
if(result == -1)
      printf("Element is not present.\n");
         else
            printf("Element is present at index %d\n",result);
 return 0;
 }



