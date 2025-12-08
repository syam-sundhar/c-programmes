#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a : ");
	scanf("%d",&a);
	b=a++;
	printf("post increment : b=%d and a=%d",b,a);
	b=++a;
	printf("\npre increment : b=%d and a=%d",b,a);
    return 0;
}