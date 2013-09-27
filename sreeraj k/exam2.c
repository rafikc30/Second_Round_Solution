//binary search
//sreeraj k0
#include<stdio.h>
main()
{
int ar[25],sea,beg,end,mid,n,flag=0,i,j,temp,pos;
printf("enter theno of elements ");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	{
		if(ar[j]>ar[j+1])
			{
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
			}
	}

	}
printf("enter the value to be searched:");
scanf("%d",&sea);
beg=0;
end=n-1;
while(flag==0||beg==end)
{
if(ar[beg]==sea)
{pos=beg;
flag=1;}
else if(ar[end]==sea)
{
pos=end;
flag=1;
}mid=(beg+end)/2;
if(ar[mid]==sea)
{
pos=mid;
flag=1;
}
else if(ar[mid]<sea)
{
beg=mid+1;
}
else if(ar[mid]>sea)
{
end=mid-1;
}

}
if(flag==1)
printf("no is found at %d",pos);
else
	printf("no is not found");
}
