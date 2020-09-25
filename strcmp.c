#include<stdio.h>
int strcompare(char [], char []);
int main()
{
    char ch1[50], ch2[50];
    int value;
    printf("Enter two strings to compare:\n");
    scanf("%s%s",ch1,ch2);
    value=strcompare(ch1,ch2);
    if(value==1)
        printf("ASCII value of 1st string is greater than that of 2nd.");
    if(value==0)
        printf("ASCII value of both strings are equal.");
    if(value==-1)
        printf("ASCII value of 1st string is less than that of 2nd.");
return 0;
}

int strcompare(char ch1[], char ch2[])
{
    return strcmp(ch1,ch2);
}

