#include<stdio.h>
#define N 100
int main()
{
    char* ppp = "programming language";
    char** p = &ppp;
    int pp = strlen(*p);
    printf("%d  ,",pp);
printf("%d\t%d\t%d\t%d\t%d\t",pp--,pp,++pp,pp++,--pp
       );

return 0;
}
