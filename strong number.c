#include<stdio.h>
int factorial(int);
int main()
{
    int n, a, b, i, sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    b=n;
    for(i=0;i<3;i++)
    {
        a=b%10;
        b=b/10;
        sum=sum+factorial(a);

    }
    if(sum==n)
    {
        printf("Strong Number!");
    }
    else
        printf("Not Strong Number!");

return 0;
}

int factorial(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return a*factorial(a-1);
}
