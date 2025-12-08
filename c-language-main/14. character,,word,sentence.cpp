#include<stdio.h>
int main()
{
	char ch;
	char word[20];
	char sen[200];
	printf("Enter a character : ");
	scanf(" %c",&ch);
	printf("Enter a Word : ");
	scanf(" %s",&word);
	printf("Enter a Sentence : ");
	scanf(" %[^\n]",&sen);
	printf("Character is : %c \nWord is : %s \nSentence is : %s",ch,word,sen);
	return 0;
}