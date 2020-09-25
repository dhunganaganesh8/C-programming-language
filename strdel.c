#include<stdio.h>
void strdel(char [], int);
int main()
{
    char str[30];
    int n;
    gets(str);
    scanf("%d",&n);
    strdel(str,n);
    printf("%s",str);
return 0;
}

void strdel(char str[], int n)
{
    strcpy(&str[n-1],&str[n]);
}
