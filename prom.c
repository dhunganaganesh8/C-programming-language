#include<stdio.h>

int* reversearray(int s[], int n)
{
static int b[10];
int i;

for(i=0;i<n;i++)
    b[i]=s[n-i-1];

return b;
}
int main()
{
int n,i,a[10];
printf("Enter number of terms:");
scanf("%d",&n);
printf("Start entering values");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int*ptr=reversearray(a,n);
for(i=0;i<n;i++)
{
   printf("%d",*(ptr+i));
}


return 0;
}
