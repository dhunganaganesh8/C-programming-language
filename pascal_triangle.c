#include<stdio.h>
int main()
{
    int n, i, j, k, x=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
                x=1;
            else
                x=x*(i-j+1)/j;
            printf("%d ",x);
        }
        printf("\n");
    }
return 0;
}
