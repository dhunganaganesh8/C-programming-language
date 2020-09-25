#include<stdio.h>
#include<math.h>
float sine(float, int);
int factorial(int);
int n=0;
int main()
{
    float x, sinx, n;
    printf("Enter the value of angle in radian:");
    scanf("%f",&x);
    sinx=sine(x,n);
    printf("The required value of sinx is : %f",sinx);
return 0;
}

float sine(float x, int n)
{
    if(x==0)
        return 0;
    if(n<=10)
    {
        return (pow(-1,n)*pow(x,2*n+1))/(factorial(2*n+1))+sine(x,n+1);
    }
    else
        return 0;
}

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}



