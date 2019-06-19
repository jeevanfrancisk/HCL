#include<stdio.h>
int cost(int, int);
int main(void)
{
    int a,b;
    printf("Enter the cost :");
    scanf("%d",&a);
    printf("Enter the quantity :");
    scanf("%d",&b);
    int (*ptrcost)(int,int);
    ptrcost=cost;
    int totalcost = ptrcost(a,b);
    printf("total cost = %d ",totalcost);
    return 0;
}
 int cost(int x, int y)
{
    return x*y;
}
