#include <stdio.h>
int main()

{

        printf("Sum Calculator\n");
        printf("==============\n");
        printf("Enter the numbers you would like to calculate the sum of.\n");
        printf("When done, type 'Q' to output the results and quit.\n");
        float sum,num;
        do  
        {                                    
          printf("Enter a number:");
          scanf("%f",&num);
          sum+=num;      
        }
  while (num!=0);
  printf("The sum of the numbers is %.6f\n",sum);
}
