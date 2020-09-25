#include<stdio.h>
int a=1;
int HCF(int, int);
int main()
{
    int m,n,hcf;
    printf("enter two numbers:");
    scanf("%d%d",&m,&n);
    hcf=HCF(m,n);
    printf("the required HCF is %d  ",hcf);
return 0;
}

int HCF(int m, int n)
{
int i,min,hcf,a;
min=(m<n)?m:n;
for(i=2;i<min;i++)
{
if(m%i==0 && n%i==0)
{
a=i;
m=m/i;
n=n/i;
min=(m<n)?m:n;
return hcf=a*HCF(m,n);
}
else
return hcf;
}
}


