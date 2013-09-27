//Joseph Joice
#include <stdio.h>
main()
{
	int ll,ul,n,i,s,mid;
	printf("\n\tEnter No of Elements : ");
	scanf("%d",&n);
	printf("\n\tEnter The Elements");
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n\tEnter Number To Be Searched : \n\t");
	scanf("%d",&s);
	ll=0;
	ul=n-1;
	while(ll<=ul)
	{	mid=(ll+ul)/2;
		if(mid==s)
			break;
		else if(mid>s)
			ul=mid-1;
		else
			ll=mid+1;
	}
	if(ll>ul)
		printf("Not Present\n");
	else
		printf("Present\n");
}
