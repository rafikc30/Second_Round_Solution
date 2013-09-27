//akash k sunny
#include<stdio.h>
#define SIZE 6

int search(int a[],int n)
{
int beg=0,end=SIZE-1,mid;
while(beg!=end||beg>end)
{

	mid=(beg+end)/2;
	if(a[mid]==n)
	return mid+1;
	else if(a[mid]>n)
	end=mid;
	else if(a[mid]<n)
	beg=mid;
}
return 0;
}
void main()
{
int a[SIZE],i=0,n,pos=0;
printf("Enter the sorted (in ascending order) array\n");
for(i=0;i<SIZE;++i)
{
	printf("Enter element number %d ",i+1);
	scanf("%d",&a[i]);
}
printf("Enter the element to be searched ");
scanf("%d",&n);
pos=search(a,n);
if(pos)
printf("The element is at %d\n",pos);
else
printf("Element not found\n");
}
