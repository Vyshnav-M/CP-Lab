#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len,flag=0;;
    printf("Enter a string\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
     if(str[i]!=str[len-1-i])
        flag=1;
    if (flag==0)
     printf("Entered string is a palindrome\n");
    else
     printf("Entered string is not a palindrome\n");
    return 0;
}
