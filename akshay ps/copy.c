//akshay
#include<stdio.h>
void* copy(void*,void*,int);
void main()
{
	int a[50],b[50],n,limit,byte,j;
	printf("enter the array size");
	scanf("%d",&limit);
	printf("enter array elements\n");
	for(j=0;j<limit;j++)
		scanf("%d",&a[j]);
	printf("enter the number of bytes to transfered\n");
	scanf("%d",&byte);
	copy(a,b,byte);
	for(j=0;j<n;j++)
		printf("%d\n",b[j]);
}
void* copy(void* pFrom,void* pTo,int nBytes)
{
	int bytes,i=0;
	while(bytes<nBytes)
	{
		pTo[i]=pFrom[i];
		bytes++;
	}
}


