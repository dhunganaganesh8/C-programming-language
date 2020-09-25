#include<stdio.h>
int main()
{
int a[50],b[50],c[50],n,i,j;
printf("Write the number of terms in both arrays : ");
scanf("%d",&n);
printf("start entering values of first array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
printf("start entering values of second array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
printf("the required array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]+b[i]);
}
return 0;
}
