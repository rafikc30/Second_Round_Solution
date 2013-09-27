//revathy k deepakO
//binary search

#include<stdio.h>
int bsearch(int[],int,int); //function to carryout search

//main program
void main()
{
  int nList[100],nSearch,nPosition,nIndex,nSize;
  printf("\n Enter size of the intiger list(size<100):");
  scanf("%d",&nSize);
  printf("\n Enter the sorted intoger list(ascending order):");
  for(nIndex=0;nIndex<nSize;nIndex++) //loop to input list
    scanf(" %d",&nList[nIndex]);
  printf("\n Enter element to be searched:");
  scanf("%d",&nSearch);
  nPosition=bsearch(nList,nSize,nSearch);
  if(nPosition) printf("\n %d is on position %d\n",nSearch,nPosition);
  else printf(" %d not found\n",nSearch); 
}

//fn defnition
int bsearch(int nList[100],int nSize,int nSearch)
{
  int nStart,nEnd,nMiddle,nFlag=0,nPos;
  nStart=0;
  nEnd=nSize-1;
  while(nStart<=nEnd)
  {
    nMiddle=(nStart+nEnd)/2;
    if(nList[nMiddle]==nSearch) 
    {
      nPos=nMiddle+1;
      nFlag=1;
      break;
    }
    if(nList[nMiddle]<nSearch)
      nStart=nMiddle+1;
    else
      nEnd=nMiddle-1; 
  }
  if(nFlag) return nPos;
  else return nFlag;
}
