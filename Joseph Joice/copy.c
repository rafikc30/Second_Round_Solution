#include <stdio.h>
void* copy(void* pFrom,void* pTo,int nBytes)
{	int i;
	for(i=0;i<nBytes;i++)
		*(int *)pTo=*(int *)(pFrom+i);
	return pTo;
}
void main()
{
	int arr[10],arr2[10],i;
	for(i=0;i<10;i++)
		arr[i]=i+10;
	int *p=copy(arr,arr2,10);
	for(i=0;i<10;i++)
	printf("%d",*(p+i));
}
