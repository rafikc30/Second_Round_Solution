//binary.c
//Bince George
#include<stdio.h>
int main()
{
int a[20],first,last,mid,n,item,i,flag=1;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
first=0;
last=n-1;
printf("Enter the item to be searched\n");
scanf("%d",&item);
while(first<=last)
{
	mid=(first+last)/2;
	if(a[mid]==item)
	{
		printf("Item found at position %d",mid+1);
		flag=0;break;
	}
	else if(a[mid]<item)
		first=mid+1;
	else if(a[mid]>item)
		last=mid-1;
}
if(flag==1)
	printf("Item not found\n");
}
