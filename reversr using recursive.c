#include<stdio.h>
void reversestr(char [], int);
int main()
{
    int i=0;
    char str[30];
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i]!='\0')
        i++;
    reversestr(str,i-1);
    printf("The required reversed string is : %s",str);
return 0;
}

void reversestr(char str[], int i)
{
    static int j=0;
    char temp;
    if(i>=j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        j++;
        reversestr(str,i-1);
    }
}
