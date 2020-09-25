#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=2*(4-i);j>0;j--)
            printf(" ");
        for(k=1;k<=i+1;k++)
        {
            printf("%d ",k);
        }
        for(l=i;l>0;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }



return 0;
}
