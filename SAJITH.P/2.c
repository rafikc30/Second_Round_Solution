//sajith
#include<stdio.h>
int main()
{
	int i,n,a[50],mid,key,low,high,flag=0;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements :\n");
	for(i=0;i<n;i++)
	{
 		scanf("%d",&a[i]);
	}
	printf("enter the elements to be searched");
	scanf("%d",&key);
	low=0,high=n-1;
	mid=(low+high)/2;
	for(i=0;i<n||a[i]==key;i++)
	{
		if(a[i]==key)
		{
			printf("element %d is found at the location %d \n",key,i+1);
			flag=1;
		}
		else if(key>a[mid])
		low=mid+1;
		else high=mid-1;
	}
	if(flag==0)
	printf("element is not found \n");
	getchar();
	return 0;
}
