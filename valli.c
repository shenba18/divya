#include <stdio.h>
int main()
{
   char ch;
   unsigned int long wordcount,charcount;
   int u;
   wordcount=0;
   charcount=0;
   while((ch=getc(stdin))!=EOF)
   {
   	if (ch !='\n') 
   {
   	++charcount;
   }
       if (ch==' ' || ch=='\n')
       {
       	++wordcount;
       	}

     }
     if(charcount>0)
     {
      ++wordcount;
   }
   printf( "%lu\n", wordcount );

}
