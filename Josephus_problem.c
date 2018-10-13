#include <stdio.h> 
  
int josephus(int m, int k) 
{ 
  if (m == 1) 
    return 1; 
  else
    return (josephus(m - 1, k) + k-1) % m + 1; 
} 
  
int main() 
{ 
  int n = 10; 
  int k = 2; 
  printf("The position is :- %d", josephus(n, k)); 
  return 0; 
} 
