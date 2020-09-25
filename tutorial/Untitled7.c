#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,u,sum,i,j,a,b,c,k  ;
    printf("Enter a range:");
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        n=i;
        b=0;
        sum=0;
        k=i;
        a=i;
        while(a>0)
        {
            a=a/10;
            b++;
        }
        for(j=0;j<b;j++)
        {
            c=n%10;
            n=n/10;
            sum=sum+pow(c,b);
        }
        if(k==sum)
            printf("%d ",k);

    }

return 0;
}
