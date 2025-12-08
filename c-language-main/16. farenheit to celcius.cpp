#include<stdio.h>
int main()
{
	float farenheit,clecius;
	printf("enter temperature in farenheit : ");
	scanf("%f",&farenheit);
	clecius=(farenheit-32)*5/9;
	printf("temperature in celcius is %2f C",clecius);
	return 0;
}