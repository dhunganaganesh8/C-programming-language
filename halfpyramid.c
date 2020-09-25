#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(k=9;k>2*i-1;k--)
        {
            printf(" ");
        }

        for(j=0;j<2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    for(i=4;i>0;i--)
    {
        for(k=9;k>2*i-1;k--)
        {
            printf(" ");
        }

        for(j=0;j<2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");

    }


return 0;
}
