//akash k sunny
#include<stdio.h>
void* copy(void *pFrom,void* pTo,int nBytes)
{
	int i;
	for(i=0;i<nBytes;++i)
	{
	//printf("%c",pFrom[0]);
		//pTo[i]=pFrom[i];
		*((char*)(pTo+i))=*((char*)(pFrom+i));
	}
	return (char*)pTo;
}
void main()
{
	char a[10],b[10];
	int n=0;
	printf("Enter source string (max size 9)");
	gets(a);
	printf("Enter the number of bytes to be copied");
	scanf("%d",&n);
	copy(a,b,n);
	b[n]='\0';
	printf("The copied string is %s\n",b);
}
