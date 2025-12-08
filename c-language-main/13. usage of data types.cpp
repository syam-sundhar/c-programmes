#include<stdio.h>
int main()
{
	int age;
	float weight;
	char gender;
	char name[54];
	printf ("Enter Your Name : ");
	scanf("%[^\n]",&name);
	printf ("enter gender (M or F) : ");
	scanf(" %c",&gender);
	printf ("Enter Age : ");
	scanf("%d",&age);
	printf ("enter weight : ");
	scanf("%f",&weight);	
	printf("Name:%s\nAge:%d\nWeight:%f\nGender:%c",name,age,weight,gender);
    return 0;
}