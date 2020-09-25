#include<stdio.h>
int sumofdigits(int);
int main()
{
    int n, sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=sumofdigits(n);
    printf("The sum is: %d",sum);


return 0;
}

int sumofdigits(int n)
{
    int a, sum=0;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }
    if(sum<=9)
        return sum;
    else
        return sumofdigits(sum);
}
