#include<stdio.h>
#include<math.h>
int sumofseries(int n);
int main()
{
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=sumofseries(n);
    printf("The sum  of series is : %d\n", sum);
return 0;
}

int sumofseries(int n)
{
   int i,s=0;
   for(i=0;i<n;i++)
    {
       s=s+pow(10,i);
    }

    if(n==1)
        return 1;
    else
        return s+sumofseries(n-1);

}
