#include<stdio.h>
int main ()
{
    int l,b;
    printf("enter length of rectangle :");
    scanf("%d",&l);
    printf("enter breadth of the rectangle :");
    scanf("%d",&b);
    printf("perimeter of the rectangle is : %d",2*(l+b));
    printf("\narea of the rectangle is : %d",l*b);
    return 0;
}
