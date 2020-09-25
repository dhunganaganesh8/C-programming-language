#include <stdio.h>
int main()
{
   int ch[100];
   int i=0,j;
   while((ch[i]=getchar())!='\n')
   i++;
   for(j=0;j<i;j++)
   {printf("%c",ch[j]);
   }

   return 0;
}
