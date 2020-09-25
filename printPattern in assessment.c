#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=5-i;k>0;k--)
            printf("%d",k);
        for(l=2;l<=5-i;l++)
            printf("%d",l);
        printf("\n");
    }


return 0;
}
