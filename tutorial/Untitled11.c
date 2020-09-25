#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    while(n!=-1)
    {
        printf("Enter number:\n");
        scanf("%d",&n);
        if(n%2==0)
            a=a+1;
        else
            b=b+1;

    }
    printf("Number of even numbers = %d and odd numbers = %d",a,b);

return 0;
}
