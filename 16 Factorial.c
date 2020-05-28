#include<stdio.h>

int fact(int n)
{
 int i,fact=1;
 for(i=1;i<=n;i++)
   fact*=i;
 return fact;
}

int rec_fact(int n)
{
  if(n==0||n==1)
    return 1;
  else
    return n*rec_fact(n-1);
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factorial of %d using non recursive function = %d \n Using recursive function = %d",n,fact(n),rec_fact(n));
    return 0;
}
