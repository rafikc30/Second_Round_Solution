#include<stdio.h>
void main()
{
 int i,n,j,p;
 void *pfrom,*pto;
 void copy(void *pf,void *pt,int n);
  printf("Enter memory size of pfrom(in bytes)\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
     {
       pfrom= new ;void;
      }
 printf("Enter how many bytes to be copied\n");                 //vijay p r
 scanf("%d",&j);
 if(j>n)
     printf("not enough bytes\n");
 else
     copy(&pfrom,&pto,j);
 }
  void copy(void *pf,void *pt,int n)
 {
    int i,k;
    k=0;
  for(i=0;i<n;)
     &pt[k++]=&pf[i++];
  printf("%d bytes successfully copied\n");
 }
