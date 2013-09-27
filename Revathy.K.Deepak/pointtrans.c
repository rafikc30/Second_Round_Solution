//revathy k deepak
//implementing void* fn
#include<stdio.h>
void *copy(void *pFrom,void *pTo,int nBytes);

void main()
{
  int nBytes;
  void *pFrom,*pTo;
  char string1[50],string2[50];
  printf("\nEnter a string:");
  gets(string1);
  printf("\nEnter no of charecters to be transfered:");
  scanf("%d",&nBytes);
  *pfrom=string1;
  *pTo=string2;
  pTo=copy(void *pFrom,void *pTo,int nBytes);
  printf("\nafter transfer");
  printf("\nstring1:");
  puts(string1);
  printf("\nstring2:");
  puts(string2);
}

void *copy(void *pFrom,void *pTo,int nBytes)
{
  int nIndex;
  for(nIndex=0;nIndex<nBytes;nIndex++)
  {
   *pTo=*pFrom;
   *pFrom-1;
  }
  return *pTo;
}

