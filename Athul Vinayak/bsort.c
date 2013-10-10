int main()
{
	int arr[100],i,n,j;
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
				arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
