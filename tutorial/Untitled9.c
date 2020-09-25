#include<stdio.h>
int sumofdigits(int);
int main()
{
    int n,a,b,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=sumofdigits(n);
    printf("the required sum is : %d",sum);
    return 0;
}

int sumofdigits(int n)
{
    int i,a,x,c;
    int s=0;
    c=n;
    a=n;
    while(c>0)
    {
       x=c%10;
       c=c/10;
       s=s+x;
    }
    if(s>=0&&s<=9)
        return s;
    else
        return sumofdigits(s);
}
