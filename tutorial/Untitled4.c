#include<stdio.h>
float sumofseries(int);
int main()
{
    int n;
    float sum;
    printf("Enter number of terms:");
    scanf("%d",&n);
    sum=sumofseries(n);
    printf("The sum of required terms in given series is: %f", sum);
return 0;
}

float sumofseries(int n)
{
    float i;
    float s=0;
    for(i=1;i<=n;i+=1)
    {
        s=s+(1/(i*i));
    }
    return s;
}
