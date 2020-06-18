#include<stdio.h>
int main()
{
	int a[20],n,i;
	int *p=a;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	   scanf("%d",(p+i));
	printf("The array elements are\n");
	for(i=0;i<n;i++)
	   printf("%d\t",*(p+i));
    return 0;
}
