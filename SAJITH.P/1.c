//sajith
#include<stdio.h>
void* copy(void* pFrom,void* pTo,int nBytes)
{
int i;
for(i=0;i<nBytes;i++)
{
	pTo[i]=pFrom[i];
}
}
int main()
{
	char pFrom[10],pTo[10];
	int nBytes;
	printf("enter a string :\n");
	scanf("%[^\n]",pFrom);
	printf("enter the nuber of bytes to be transfered\n");
	scanf("%d",&nBytes);
	nBytes=nBytes/2;
	copy(pFrom,pTo,nBytes);
	printf("output :\n");
	printf("%s",pTo);
	return 0;
}
