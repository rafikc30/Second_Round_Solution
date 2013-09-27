#include<stdio.h>
#include<string.h>
void copystr(char string1[],char string2[],int n);
main()
{
	char string1[25],string2[25];
	int n,i;
	for(i=0;i<25;i++)//for making second array blank
	string2[i]=32;
	printf("Enter a string\n");
	gets(string1);
	printf("Enter the the number of letters to transfer \n");
	scanf("%d",&n);
	copystr(string1,string2,n);
	printf("\nThe copied part is\n");
	puts(string2);
}
void copystr(char string1[],char string2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	string2[i]=string1[i];
}
