#include <stdio.h>
int main()
{
    char    str[100];
    int countnumericcharacters;
    int counter;
    countnumericcharacters=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countnumericcharacters++;
    }
 
    printf("\nnumericcharacters: %d",countnumericcharacters);
}
