#include<stdio.h>

void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
	

int main()
{
	int a,b;
	int *p=&a;
	int *q=&b;
	printf("Enter two numbers\n");
	scanf("%d%d",p,q);
	printf("Sum of %d and %d is=%d\n",*p,*q,*p+*q);
	printf("Before swapping a = %d b= %d\n",*p,*q);
	swap(p,q);
	printf("after swapping a = %d b= %d\n",*p,*q);
	return 0;
}
