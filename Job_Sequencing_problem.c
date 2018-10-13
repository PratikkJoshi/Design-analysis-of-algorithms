#include <stdio.h>

#define MAX 100

typedef struct Sequence{
	char id[5];
	int deadline;
	int profit;
} Sequence;

void jobS(Sequence jb[], int n);

void jobS(Sequence jb[], int n) 
   {
      int i, j, k, maxprofit;
      int timeslot[MAX];
      int filledTimeSlot = 0;
      int dmax = 0;
         for(i = 0; i < n; i++)
          {
	if(jb[i].deadline > dmax) 
	{
	 dmax = jb[i].deadline;
	}
          }

for(i = 1; i <= dmax; i++)
 {
  timeslot[i] = -1;
 }
printf("dmax: %d\n", dmax);
for(i = 1; i <= n; i++)
 {
  k = minValue(dmax, jb[i - 1].deadline);
  while(k >= 1) {
  if(timeslot[k] == -1) 
   {
     timeslot[k] = i-1;
     filledTimeSlot++;
     break;
   }
     k--;
 }

if(filledTimeSlot == dmax)
 {
   break;
  }
}
printf("\nRequired Sequences:-");
for(i = 1; i <= dmax; i++) {
printf("%s", jb[timeslot[i]].id);
if(i < dmax) 
{
  printf(" --> ");
 }
}
maxprofit = 0;
for(i = 1; i <= dmax; i++) {
 maxprofit += jb[timeslot[i]].profit;
 }
printf("\nMax Profit:- %d\n", maxprofit);
}

int minValue(int x, int y) {
	if(x < y) return x;
	return y;
}

int main(void) {
     int i, j;
       Sequence jb[5] = { {"j1", 2, 50},{"j2", 1, 80},{"j3", 3, 30},{"j4", 2, 10},{"j5", 1, 60}};
     Sequence temp;
     int n = 5;
   for(i = 1; i < n; i++) {
        for(j = 0; j < n - i; j++) 
        {
	    if(jb[j+1].profit > jb[j].profit) 
	       {
	        temp = jb[j+1];
	        jb[j+1] = jb[j];
	        jb[j] = temp;
 	       }
        }
   }

 printf("%10s %10s %10s\n", "Job's", "Deadline's", "Profit's");
 for(i = 0; i < n; i++) {
 printf("%10s %10i %10i\n", jb[i].id, jb[i].deadline, jb[i].profit);
  }
 jobS(jb, n);
 return 0;
}

