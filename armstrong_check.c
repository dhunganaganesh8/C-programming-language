#include<stdio.h>
#include<math.h>
int checkarmstrong(int, int);
int main()
{
int n,i=0,b,a;
printf("Enter a number:");
scanf("%d",&n);
b=n;
while(b>0)
{
   b=b/10;
    i++;
}
a=checkarmstrong(n,i);
if(a==n)
{
  printf("The number is armstrong.");
}
else
{
  printf("The number is not armstrong.");
}
return 0;
}

int checkarmstrong(int n, int i)
{
if(n==0)
        return 0;
else
        return pow((n%10),i)+checkarmstrong(n/10,i);

}




