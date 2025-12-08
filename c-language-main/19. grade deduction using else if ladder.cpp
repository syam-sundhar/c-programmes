#include<stdio.h>
int main() 
{
	int s1,s2,s3,total;
	float avg;
	int roll;
	char name[54];
	printf ("Enter Your Name : ");
	scanf("%[^\n]",&name);
	printf ("Enter roll : ");
	scanf("%d",&roll);
	printf ("enter marks of three subjects s1,s2 and s3 out of 100 : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	avg=(float)(total)/3;
	printf("total marks : %d",total);
	printf("\naverage : %.2f",avg);
	if(s1<40&&s2<40&&s3<40)
	{ 
	printf("\ngrade : failed");
	}
	else if(avg>70)
	{
	printf("\ngrade : distinction");
	}
	else if(avg>60)
	{
	printf("\ngrade : first class");
	}
	else
	{
	printf("\ngrade : pass");
	}
	return 0;
}