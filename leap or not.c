#include<stdio.h>
int main()
{
    int m,n,i;
    printf("Enter a range:");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%4==0)
        {
          if(i%100==0)
          {
            if(i%400==0)
                printf("%d ",i);
          }
          else
            printf("%d ",i);
        }
    }
return 0;
}
