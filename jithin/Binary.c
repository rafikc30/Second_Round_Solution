// Jithin Kumar.P  #+919048771701


#include<stdio.h>


int main()
 {

  int  nSource[75];
  int  nElement;
  int  nIndex;
  int  nCount;
  int  nStart = 0;
  int  nEnd;
  int  nElementIndex = -1;
  int  nMid;

  printf("\nEnter the count\t:\t");
  scanf(" %d", &nCount);
  nEnd = nCount-1;

  printf("\nEnter elements in assending order\n");

  for( nIndex = 0; nIndex < nCount; nIndex++)
   {
     scanf(" %d ", &nSource[nIndex]);
   }

  printf("\nEnter an element for  searching\t:\t");
  scanf(" %d", &nElement);

  while( nStart <= nEnd )
   {
     nMid = (nStart + nEnd)/2;

     if( nSource[nMid] == nElement )
       {
         nElementIndex = nMid;
         break;
       }
     if( nElement < nSource [nMid] )
       {
         nEnd = nMid - 1;
       }
     else
        {
        nStart = nMid + 1;
       }

   };//end of while loop


   if( -1 == nElementIndex )
    {
      printf("\nElement not found\n");
    }
   else
    {
      printf("\nElement found at  %d th index\n", nElementIndex);
    }

  return(0);
 }
