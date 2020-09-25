#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("Enter value of n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("start entering values:");
    free(p);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
    

    return 0;
}

