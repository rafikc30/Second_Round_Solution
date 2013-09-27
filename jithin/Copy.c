// Jithin Kumar.P  #+919048771701


#include<stdio.h>

#define MAX_SIZE 50


void Copy (void* pFrom , void* pTo, int nBytes)
 {

   int nIndex;
   char *pCFrom = (char*)pFrom;

   char *pCTo   =  (char*)pTo;

   for( nIndex =0 ; nIndex < nBytes; nIndex++)
    {
       *(pCTo + nIndex )  = *(pCFrom + nIndex);
    }
 }



int main()
 {

  int  nSource[ MAX_SIZE ];
  int  nDest[ MAX_SIZE ];
  int  nIndex;



  for( nIndex = 0; nIndex < 10; nIndex++)
   {
     nSource[nIndex] = nIndex * 10;
     nDest[nIndex] = 0;
   }

  printf("\nBefore copying\n");
  for( nIndex = 0; nIndex < 10; nIndex++)
   {
      printf("%d\n", nDest[nIndex]);
   }

  Copy(nSource, nDest, 10 * sizeof(int) );

  printf("\nAfter copying\n");
  for( nIndex = 0; nIndex < 10; nIndex++)
   {
      printf("%d\n", nDest[nIndex]);
   }


  return(0);
 }
