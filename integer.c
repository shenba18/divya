#include <stdio.h>
 int main()
{
   int n, sum = 0, c;
 
   printf("Enter the number of integers you want to add\n");
   scanf("%d", &n);
   for (c = 1; c <= n; c++)
   {
      
      sum = sum + c;
   }
 
   printf("Sum of entered integers = %d\n",sum);
}
