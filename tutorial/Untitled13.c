#include<stdio.h>
int primecheck(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==1||n==2)
        printf("The number is prime.");
    else if(primecheck(n))
        printf("The number is prime.");
    else
        printf("The number is composite.");
return 0;
}

int primecheck(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
        else
            return 1;
    }
}
