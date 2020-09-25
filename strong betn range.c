#include<stdio.h>
int factorial(int);
int main()
{
    int l, u, a, b, i, j, sum;
    printf("Enter range:");
    scanf("%d%d",&l,&u);

    for(j=l;j<=u;j++)
    {
        sum=0;
        b=j;
       while(b>0)
    {

        a=b%10;
        b=b/10;
        sum=sum+factorial(a);

    }
        if(sum==j)
        {
        printf("%d ",sum);
        }
    }


return 0;
}

int factorial(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return a*factorial(a-1);
}
