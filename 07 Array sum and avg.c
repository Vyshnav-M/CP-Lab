#include<stdio.h>

int main()
{
    int a[50],n,i;
    float sum=0;
    printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("Enter %d elements to the array\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("\nThe array elements are\n");
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
    printf("\nThe sum = %.2f , average = %.2f\n",sum,sum/n);
    return 0;
}