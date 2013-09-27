#include<stdio.h>
int main()
{
	int i,n,l=0,h,m,a[50],item;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	 h=n-1;
	printf("\nEnter element to search : ");
	scanf("%d",&item);
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==item)
		{
			printf("\nItem found  ");
			break;
		}
		else if(a[m]<item)
			l=m+1;
		else
			h=m-1;

	}
	if(l>h)
		printf("\nItem not found !!!");

return 0;
}
