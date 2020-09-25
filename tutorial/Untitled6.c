#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       j=(i*(i+1)/2)*10*i;
       sum=sum+j;
    }
    printf("The sum of required terms in series is: %d", sum);


return 0;
}
