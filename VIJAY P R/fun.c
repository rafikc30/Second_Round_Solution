#include<stdio.h>
void main()
{
 int a[50],n,beg,mid,last,flag,i,num,pos;
 flag=0;
 printf("enter array size(max 50)\n");
 scanf("%d",&n);
 printf("Enter elements\n");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
 printf("Enter element to be searched\n");            //vijay p r
     scanf("%d",&num);
 beg=0;
 last=n-1;
  while(beg<=last)
     {
       mid=(beg+last)/2;
            if(num==a[mid])
                {
                  pos=(mid+1);
                  flag=1;
                   break;
                }
             if(num>a[mid])
                 beg=mid+1;
            if(num<a[mid])
                 last=mid-1;
     }
  if(flag)
       printf("Element found at position %d\n",pos);
  else
      printf("Element not found\n");
}
