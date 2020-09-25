#include<stdio.h>
int sumofdigits(int);
int main()
{
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=sumofdigits(n);
    printf("the sum of digits of given number is %d", sum);
return 0;
}

int sumofdigits(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+sumofdigits(n/10);

}
