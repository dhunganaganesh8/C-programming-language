#include<stdio.h>
#include<math.h>
int main()
{
    int a, b=0, c, i=0, n, sum=0;
    printf("Enter the number in binary : ");
    scanf("%d",&n);
    while(n>0)
    {
        c=n%10;
        n=n/10;
        sum=sum+c*pow(2,i);
        i++;
    }
    printf("The required number in decimal is : %d",sum);

return 0;
}
