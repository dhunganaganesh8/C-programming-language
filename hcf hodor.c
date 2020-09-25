#include <stdio.h>
int hcf(int,int,int);
int main()
{
	int a,b,i=1;

	scanf("%d %d",&a,&b);
	int hcf1=hcf(a,b,i);
	printf ("%d",hcf1);


	return 0;
}

int hcf(int a, int b,int i)
{
	static int hcf1;
	if (a%i==0 &&  b%i==0)
	hcf1=i;
	if(i<=a && i<=b)
	hcf(a,b,i+1);
	return hcf1;
}

