#include<stdio.h>
//double sumofseries(float);
float main()
{
    int n;
    double s=0,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(1/(i*i));
    }
    printf("The sum of required terms in given series is: %lf", s);
}
