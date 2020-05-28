#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str1[50],str2[50];
    printf("Enter 2 strings ending with $\n");
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
    {
      i++;
    }
    while(str2[j]!='\0')
    {
     str1[i]=str2[j];
     i++;
     j++;
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
