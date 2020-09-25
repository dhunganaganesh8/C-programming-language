#include<stdio.h>
#include<math.h>
int main()
{
float root,sum=0,i=1;
do{
sum=2*i-1;
printf("\t%f\n",sum);
i*=(5.0/3.0);
}while(sum<=15);
root = pow(i,1.0/2.0);
printf("\n%.3f",root);
return 0;
}
