#include<stdio.h>
main()
{
	int num[50],lower,upper,key,n,i,mid;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("\nEnter array elements in ascending order\n");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	printf("\nEnter number to be searched\n");
	scanf("%d",&key);
	lower=0;
	upper=n;
	while(lower<=upper)
	{
	    mid=(lower+upper)/2;
	    if(key==num[mid])
	    {
		printf("\nThe given number is in the array\n");
		return;
	    }
	    else if(num[mid]>key)
	    upper=mid-1;
	    else if(num[mid]<key)
	    lower=mid+1;
	}
	printf("\nThe element is not in array\n");
}

