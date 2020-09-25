#include<stdio.h>
float T1(int);
float T2(int);
float T3(int);
float Tn(int);
float Sn(int);
int main()
{
    int n;
    float sum;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    sum=Sn(n);
    printf("The sum of given series upto given terms is : %f",sum);
    return 0;
}

float T1(int n)
{
    float t;
    t=2*n;
    return t;
}
float T2(int n)
{
    float t;
    t=2*n+1;
    return t;
}
float T3(int n)
{
    float t;
    t=2*n+3;
    return t;
}
float Tn(int n)
{
    return T1(n)*(T2(n)/T3(n));
}
float Sn(int n)
{
    int i;
    float s=0;
    for(i=1;i<=n;i++)
        s=s+Tn(i);
    return s;
}
