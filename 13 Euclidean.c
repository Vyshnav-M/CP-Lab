#include<stdio.h>
struct point
{
 int x;
 int y;
}p1,p2,p3;
int main()
{
 printf("Enter the first point\n");
 scanf("%d%d",&p1.x,&p1.y);
 printf("Enter the second point\n");
 scanf("%d%d",&p2.x,&p2.y);
 p3.x=p1.x+p2.x;
 p3.y=p1.y+p2.y;
 printf("new point after addition= (%d,%d)\n",p3.x,p3.y);
 return 0;
}
