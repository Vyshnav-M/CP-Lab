#include<stdio.h>
#include<stdlib.h>
int getmat(int mat[][100],int row,int col)
{
	int i,j;
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
       {
        printf("The element at position (%d,%d): ",i+1,j+1);
        scanf("%d",&mat[i][j]);
       }
    }
    return 0;
}

int disp_mat(int mat[][100],int row,int col)
{
   int i,j;
   for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
      {
       printf("%d\t",mat[i][j]);
      }
     printf("\n");
    }
    return 0;
}

int add_mat(int a[][100],int b[][100],int row,int col)
{
   int sum[100][100],i,j;
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
       {
         sum[i][j]=a[i][j]+b[i][j];
       }
    }
    printf("Matrix 1:\n");
    disp_mat(a,row,col);
    printf("Matrix 2:\n");
    disp_mat(b,row,col);
    printf("The added matrix is\n");
    disp_mat(sum,row,col);
    return 0;
}

int mul_mat(int a[][100],int b[][100],int r1,int c1,int r2,int c2)
{
	int pro[100][100],i,j,k,sum;
	for(i=0;i<r1;i++)
    {
     for(j=0;j<c2;j++) 
      {
       sum=0;
       for(k=0;k<c1;k++)
        {
         sum+=a[i][k]*b[k][j];
         pro[i][j]=sum;
        }
      }
    }
    printf("Matrix 1:\n");
    disp_mat(a,r1,c1);
    printf("Matrix 2:\n");
    disp_mat(b,r2,c2);
    printf("The product matrix is\n");
    disp_mat(pro,r1,c2);
    return 0;
}

void mat_trans(int a[][100],int row,int col)
{
	int trans[100][100],i,j;
	for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
      {
       trans[j][i]=a[i][j];
      }
    }
    printf("The matrix is:\n");
    disp_mat(a,row,col);
    printf("The transpose matrix is\n");
    disp_mat(trans,col,row);
}
int main()
{
 int mat1[100][100],mat2[100][100];
 int r1,c1,r2,c2;
 int ch;
 printf("Enter rows and cols of first matrix\n");
 scanf("%d%d",&r1,&c1);
 printf("Enter rows and cols of second matrix\n");
 scanf("%d%d",&r2,&c2);
 printf("Enter the elements first matrix\n");
 getmat(mat1,r1,c1);
 printf("\nEnter the elements second matrix\n");
 getmat(mat2,r2,c2);
 while(1)
  {
   printf("Select operation from menu\n");
   printf("\t\tMENU\nl.Matrix addition\n2.Matrix multiplication\n3.Transpose of matrix\n4.Exit\n");
   scanf("%d", &ch);
   switch(ch)
    {
     case 1:
         if(r1==r2&&c1==c2)
		   add_mat(mat1,mat2,r1,r1);
		 else
		   printf("!!incompatable...can't add!!\n");  
		   break;
     case 2:
        if(c1==r2)
		   mul_mat(mat1,mat2,r1,c1,r2,c2);
		 else
		   printf("!!incompatable...can't multiply!!\n");  
		   break;
     case 3:
         mat_trans(mat1,r1,c1);
         mat_trans(mat2,r2,c2);
         break;
     case 4:
         exit(0);
     default:
      printf("Invalid choice!!!\n");
    }
  } 
}
