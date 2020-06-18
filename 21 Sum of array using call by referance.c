#include<stdio.h>

int arr_sum(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	   sum+=*(p+i);
	return sum;
}

int main()
{
	int a[20],n,i,sum;
	int *p=a;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	   scanf("%d",(p+i));
	sum=arr_sum(p,n);
	printf("The sum of aary is %d\n",sum);
	return 0;
}
