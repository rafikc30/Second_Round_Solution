//Mohamed Insaf
#define SIZE 10
#define KEY_POS 4
#include <stdio.h>
void main()
{
	void search(int *,int);
	int array[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int number;
	printf("Enter the number you wish to search in the array\n");
	scanf("%d",&number);
	search(array,number);
}
void search(int *arr,int keyword)
{
	int key=KEY_POS,i;
	if((*(arr+key))>keyword)
	{
		for(i=0;i<key;i++)
		{
			if(keyword==(*(arr+key)))
			{
				printf("Found %d at position %d",keyword,i);
				break;
			}
		}
	}
	if((*(arr+key))<keyword)
	{
		for(i=5;i<SIZE;i++)
		{
			if(keyword==(*(arr+key)))
			{
				printf("Found %d at position %d",keyword,i);
				break;
			}
		}
	}
	if((*(arr+key))==keyword)
	{
		printf("\nElement Found at %d",4);
	}
}
