#include<stdio.h>
int main()
{
    int n, r, a[50], i=0 ,j;
    printf("Enter the number in decimal:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
return 0;
}
