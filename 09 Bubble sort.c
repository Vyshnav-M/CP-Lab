#include<stdio.h>
int main()
{
    int a[50],n,pass,i,temp=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("\nThe unsorted array is\n");
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
    for(pass=0;pass<n-1;pass++)
    {
     for(i=0;i<n-1;i++)
     {
      if(a[i]>a[i+1])
       {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
       }
     }
    }
    printf("\nsorted array is\n");
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
}