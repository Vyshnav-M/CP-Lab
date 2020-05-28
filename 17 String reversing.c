#include<stdio.h>
#include<string.h>
void rev(char str[])
{
    int len,i=0;
    char rev[50];
    len=strlen(str);
    for(i=0;i<len;i++)
       rev[i]=str[len-1-i];
    puts(rev);       
}

int main()
{
    char str[50];
    printf("Enter a string\n");
    gets(str);
    printf("The string is: ");
    puts(str);
    printf("The reversed string is: ");
    rev(str);
    return 0;
}
