/*Rohan Reji*/
#include<stdio.h>
void main()
{
	int i,n,a[100],e,j,mid,f=0;
	char ch;
	printf("\n enter the array size..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		f=0;
		i=0;
		j=n;
		mid=(i+j)/2;
		printf("\n enter the element to be searched..");
		scanf("%d",&e);
		while(i<j)
		{
			mid=(i+j)/2;
			if(e==a[mid])
			{
				printf("\n element found at %d",mid+1);
				f=1;
				break;
			}
			else if(e>a[mid])
			{
				i=mid;
			}
			else
			{
				j=mid;
			}
		}
		if(f==0)
			printf("\n no such element");
		printf("\n want to search more...(y/n)");
		scanf(" %c",&ch);
	}while(ch=='y');
}
