#include <stdio.h>
#include <string.h>
int charr(int *);

 int main()
 {
     char*ptr;
 	int i,j;
 	ptr=charr(&j);
 	for (i=0; i<j; i=i+1)
 	{
 		printf ("%c", *(ptr+i));

	}
	/*printf ("%c", *ptr);*/
	return 0;
 }

 int charr (int *ptr)
 {
 	static char a[100];
    int i,s;

	printf ("Enter a sentence:");
 	gets(a);
 	i=&a[0];
 	s=strlen(a);
 	*ptr=s;
 	return i;
 }
