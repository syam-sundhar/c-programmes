#include<stdio.h>
int main()
{
    int s=0,a=1,n;
    printf("sum of how many natural numbers : ");
    scanf("%d",&n);
    while (a<=n)
        {
            s=s+a;
            a++;
        }
    printf("\nsum of %d natural numbers is %d",n,s);
    return 0;
}