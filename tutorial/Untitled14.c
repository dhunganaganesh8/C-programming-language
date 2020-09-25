#include<stdio.h>
#include<math.h>
double freqcalculator(double,double,double);
int main()
{
    double f,c,l,r;
    printf("Enter the values of inductance and resistance:");
    scanf("%lf%lf",&l,&r);
    printf("c \t f \n");
    for(c=0.01;c<=0.1;c=c+0.01)
    {
        f=freqcalculator(l,c,r);
        printf("%.3lf\t%lf\n",c,f);
    }
return 0;
}

double freqcalculator(double l, double c, double r)
{
    double f;
    f=sqrt(((1/(l*c))-(r*r)/(4*c*c)));
    return f;
}
