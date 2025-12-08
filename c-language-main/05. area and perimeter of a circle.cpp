#include<stdio.h>
#include<math.h>
int main ()
{
    float r;
    printf("enter the radius of circle :");
    scanf("%f",&r);
    printf("perimeter of circle : %f",2*M_PI*r);
    printf("\narea of circle is : %f",M_PI*r*r);
    return 0;
}
