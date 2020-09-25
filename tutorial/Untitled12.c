#include<stdio.h>
#include<math.h>
int main()
{
float root,sum=0; int i =1;
do
{
     sum =sum+ 2i-1;
     printf("\t%d\n",sum);
     i*=5/3;
}while(sum<=15);
root = pow(i,1/2);
printf("\n%.3f",root);
return 0;
}
