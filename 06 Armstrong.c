#include<stdio.h>

int main()
{
    int n,copy,new=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    copy=n;
    while(n>0)
    {
     new=new+((n%10)*(n%10)*(n%10));
     n=n/10;
    }
    if(new==copy)
      printf("The number is an Armstrong number\n");
    else
      printf("The number is not an Armstrong number\n");
    return 0;
}