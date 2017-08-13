#include <stdio.h>
 int main()
{
   int n, sum = 0, c,l;
 
   printf("Enter the number of integers you want to add\n");
   scanf("%d", &n);
   for (c = 1; c <= n; c++)
   {
      
      sum = sum + c;
   }
 
   printf("Sum of entered integers = %d\n",sum);
   for(l=15;l<=45;l++)
   {
   	if(l%2!=0)
   	sum=sum+l;
   }
   printf("sum of given integers=%d\n",sum);
}
