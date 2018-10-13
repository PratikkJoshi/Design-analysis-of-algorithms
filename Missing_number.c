    #include<stdio.h>
    int main(){
      int n = 9;
      int arr[9] = {6,7,10,2,4,1,3,8};
      int x = n+1; 
      int sum = 0;
      sum = x*(x+1)/2;
      int i = 0;
      int sum1 = 0;  
      for(i = 0; i<n; i++){
        sum1 = sum1 + arr[i]; 
      }
      printf("Missing number is :- %d", sum - sum1);
      return 0;
    }
