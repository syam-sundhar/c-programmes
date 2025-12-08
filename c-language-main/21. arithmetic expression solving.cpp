/* The expression is evaluated as follows 
   ((a/b)*c)-b+((a*d)/3)  */
#include<stdio.h>
int main()
{
	int a=5,b=2;
	float c=3.5;
	double d=2.0;
	printf("%2lf",a/b*c-b+a*d/3);
	return 0;
}