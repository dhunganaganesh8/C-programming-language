#include<stdio.h>
#include<math.h>
float sine(float, int);
int factorial(int);
int main()
{
    float x, sum=0;
    int n;
    printf("Enter the value of angle in radian:");
    scanf("%f",&x);
    printf("n=");
    scanf("%d",&n);
    sum=sine(x,n);
    printf("The required value of sinx is : %f",sum);
return 0;
}

float sine(float x, int n)
{
    if(x==0||n==0)
        return x;
    else
    {
        return (pow(-1,n)*pow(x,2*n-1))/(factorial(2*n-1))+sine(x,n-1);
    }

}

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}



