//question 2
//jimmy joseph
#include<stdio.h>
main()
{
int i,n,a[20];
printf("Enter the number of elements :");
scanf("%d",&n);
printf("Enter the elements in ascending order:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int item,mid,low,high,flag=0;
printf("Enter the item to be searched :");
scanf("%d",&item);
low=0;
high=n-1;
while(low<high)
{
mid=(low+high)/2;
if(a[mid]>item)
	high=mid-1;
else if(a[mid]<item)
	low=mid+1;
else if(a[mid]==item)
	{flag=1;
	break;}
}
if(flag==1)
	printf("Item is at position %d",mid+1);
else
	printf("Item not found");

}
