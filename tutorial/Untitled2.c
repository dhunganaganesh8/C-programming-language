#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+i;
        if(sum==n)
        {
          printf("the number is triangular");
          goto label;
        }
    }
    printf("the number is not triangular");
label:
return 0;
}
