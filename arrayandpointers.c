#include<stdio.h>
int main()
{
    int a[3][3],i,j,small;
    printf("Start entering values for 3x3 matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    small=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
            {
                if(a[i][j]<small)
                    small=a[i][j];
            }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                a[i][j]=small;
        }

    }
    printf("The required matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",*(*(a+i)+j));
        printf("\n");
    }



    return 0;
}
