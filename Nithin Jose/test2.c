//Binary Search:Nithin Jose
#include<stdio.h>
main()
{
int size,arr[50],k,ele,low,mid,up,temp;
temp=1;
printf("Input size of array(max 50)\n");
scanf("%d",&size);
printf("\nInput elements in ascending order\n");
for(k=0;k<size;k++)
	scanf("%d",&arr[k]);				//Inputting elements
printf("\nInput element to be searched\n");
scanf("%d",&ele);					//Inputting element to be searched
low=0;
up=size-1;
	do						//Binary search
	{
	mid=(low+up)/2;
	if(arr[mid]==ele)
	{
	printf("\nElement %d found\n",ele);
	temp=0;
	}
	if(arr[mid]>=ele)
	up=mid;
	else
	low=mid;
	}while(low<up&&(up-low!=1));
if(temp==1)
printf("\nElement not found\n");
}

