#include<stdio.h>
struct employee
   {
     char name[20];
     int emp_id;
     int salary;
   }emp[50];
int main()
   {
    int n,i;
    printf("Enter the number of of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("Enter the details of employee %d:\n",i+1);
     printf("\t\tname?\t");
     scanf("%s",emp[i].name);
     printf("\t\tEmployee id?\t");
     scanf("%d",&emp[i].emp_id);
     printf("\t\tSalary?\t");
     scanf("%d",&emp[i].salary);
    }
    printf("\nThe entered details are:");
    for(i=0;i<n;i++)
    {
     printf("\n\tEmployee %d:",i+1);
     printf("\tName = %s\tEmployee id = %d\tSalary = %d\n",emp[i].name,emp[i].emp_id,emp[i].salary);
    }
  }
