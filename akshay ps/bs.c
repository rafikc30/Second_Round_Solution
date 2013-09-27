//akshay
//binary search
#include<stdio.h>
void main()
{
	int a[50],b,check,i,low=0,high,limit,flag=0;
	printf("enter the number of elements\n");
	scanf("%d",&limit);
	high=limit;
	printf ("enter the sortes array\n");
	for(i=0;i<limit;i++)
		scanf("%d",&a[i]);
	printf("enter the number to be checked\n");
	scanf("%d",&check);
	while(flag==0)
	{
		b=(low+high)/2;
		if(a[b]==check)
		{
			printf("number is found at position %d of the array\n",b);
			flag=1;
		}
		else if(check<a[b])
			high=b;
		else if(check>a[b])
			low=b;
	}
}


