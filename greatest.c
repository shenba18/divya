#include <stdio.h>
 
int main()
{ 
    int a,b,c;
    int greatest;
 
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
 
    if(a>b && a>c)        
        greatest=a;
    else if(b>a && b>c)       
       greatest=b;
    else
         greatest=c;
 
    printf(" greatest number is = %d", greatest);
}
