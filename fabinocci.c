#include<stdio.h>
int fabinocci(int);
int main()
{
    int n, i, a;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("The required fabinocci sequece is:");
    for(i=0;i<=n;i++)
    {
        a=fabinocci(i);
        printf("%d ",a);
    }
return 0;
}

int fabinocci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fabinocci(n-1)+fabinocci(n-2);
}
