//copy.c
//Bince George
#include<stdio.h>
int i;
void copy(char *pFrom,char *pTo,int nBytes)
{
	for(i=0;i<nBytes;i++)
	{
		*pTo=*pFrom;
		pTo++;pFrom++;
	}
}
int main()
{
int n;
char *a[10],*b[10];
printf("Enter the number of bytes\n");
scanf("%d",&n);
printf("Enter the From bytes\n");
for(i=0;i<n;i++)
	scanf("%c",&a[i]);
copy(*a,*b,n);
}
