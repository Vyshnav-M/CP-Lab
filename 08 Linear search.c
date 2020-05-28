#include<stdio.h>

int main()
{
    int a[50],n,item,i;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
    printf("\nEnter the element to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
     if(a[i]==item)
      {
      printf("Item found in the array");
      break;
      }
    }
    if(i==n)
    printf("Item not found");
}