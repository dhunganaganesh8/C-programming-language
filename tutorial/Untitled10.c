#include<stdio.h>
int sumoftwonumbers(int,int);
int main()
{
    int x,y,sum;
    printf("Enter two numbers to add:");
    scanf("%d%d",&x,&y);
    sum=sumoftwonumbers(x,y);
    printf("The required sum is : %d", sum);
return 0;
}

int sumoftwonumbers(int x, int y)
{
    int s;
    s=x+y;
    return s;
}
