//suharsh c.a s3 cse
#include<stdio.h>
int  main()
{
	int n,a[25],i,j,beg,mid,end,num;
	printf("how many numbers?\n");
	scanf("%d",&n);
	printf("enter the array elements");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the number to be searched\n");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	while(beg<=end)
	{

		mid=(beg+end)/2;
		if(a[mid]==num)
		{
			printf("\nelement %d found\n",num);
			break;
		}
			else 
			{
				if(a[mid]<num)
				{
					beg=mid+1;
				}
					else
					{
					if(a[mid]>num)
					end=mid-1;
					}
			}
	}
return 0;
}

