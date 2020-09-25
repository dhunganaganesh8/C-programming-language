#include<stdio.h>
int* mat_multiply(int [3][3], int [3][3]);
int main()
{
    int mat1[3][3],mat2[3][3], i, j;
    printf("Enter the values of first matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter the values of second matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&mat2[i][j]);
    }
    int(*matrix)[3];
    matrix = mat_multiply(mat1,mat2);
    printf("Required matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",*(*(matrix+i)+j));
        printf("\n");

    }

return 0;
}

int* mat_multiply(int mat1[3][3], int mat2[3][3])
{
    int (*ptr)[3]=malloc(sizeof(int));
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+mat1[i][k]*mat2[k][j];
            *(*(ptr+i)+j)=sum;

        }
    }
    return ptr;
}
