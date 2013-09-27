#include<stdio.h>
void* copy(void *pFrom,void *pTo,int nBytes)
{
	int i;
	for(i=0;i<nBytes;i++)
	{
		*pTo(i)=*pFrom(i);
	}
}
void main()
{
	int i,n,n1;
	void *pFrom;
	void *pTo;
	printf("\n enter the size");
	scanf("%d",&n);
	printf("\n enter value for pFrom");
	for(i=0;i<n;i++)
		scanf(pFrom(i));
	printf("\n enter the byte tobe copied..");
	scanf("%d",&n1);
	copy(pFrom,pTo,n1);
	for(i=0;i<n1;i++)
		printf(*pTo(i));
	

}
