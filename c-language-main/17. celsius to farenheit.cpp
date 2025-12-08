#include<stdio.h>
int main()
{
	float farenheit,clecius;
	printf("enter temperature in celcius : ");
	scanf("%f",&clecius);
	farenheit=(clecius*1.8)+32;
	printf("temperature in farenheit is %2f F",farenheit);
	return 0;
}