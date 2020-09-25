#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=10;j>2*i;j--)
            printf(" ");
        for(k=0;k<2*i-1;k++)
            printf("* ");
        printf("\n");
    }
    for(i=4;i>0;i--)
    {
        for(j=10;j>2*i;j--)
            printf(" ");
        for(k=0;k<2*i-1;k++)
            printf("* ");
        printf("\n");
    }



return 0;
}
