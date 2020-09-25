#include<stdio.h>
int min(int mat[3][3]);
void display_using_pointer(int [3][3]);
int main()
{
    int mat[3][3], i, j,min_element;
    printf("Enter the values of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

        scanf("%d",mat[i][j]);

        }
    }
    min_element=min(mat);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

        printf("%d",mat[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

        if(i=j)
        {

            mat[i][j]=min_element;

        }
        }
    }
 /*   display_using_pointer(mat);
*/

return 0;
}

int min(int mat[3][3])
{
    int i,j,k,l,small;
    small=mat[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mat[i][j]<small)
                small=mat[i][j];


        }
    }
    return small;
}
/*
void display_using_pointer(int mat[3][3])
{
    int *a=&mat[0][0],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",*(a+i*3+j));

        }
        printf("\n");
    }
}
*/
