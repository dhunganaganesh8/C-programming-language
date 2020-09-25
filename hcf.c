#include<stdio.h>
int a=1,i=1;
int HCF(int, int, int);
int main()
{
    int m,n,hcf,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&m,&n);
    hcf=HCF(m,n,a);
    lcm=(m*n)/hcf;
    printf("the required HCF is %d  and lcm is %d ",hcf,lcm);
return 0;
}

int HCF(int m, int n, int a)
{
    label:
    if(a==m||a==n)
    {
         if(m%a==0&&n%a==0)
            return a;
         else
            return i;
    }

    if(m%a==0&&n%a==0)
    {
            i=a;
            return HCF(m,n,a+1);

    }
    else
    {
        a=a+1;
        goto label;
    }

}
