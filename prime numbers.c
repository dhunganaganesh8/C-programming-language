#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter range:");
    scanf("%d%d",&m,&n);

    for(j=m;j<=n;j++)
    {
        if(j==0||j==1)
           continue;
        else
        {
        for(i=2;i<j;i++)
          {
           if(j%i==0)
            {
             goto label;
            }
          }
         printf("%d ",j);
         label:
         printf("");
        }
    }



return 0;
}
