//Joseph Joice
#include <stdio.h>
void* copy(void* pFrom,void* pTo,int nBytes)
{	int i;
	for(i=0;i<nBytes;i++)
	*(char *)pTo=*(char *)(pFrom+i);
	return pTo;
}
main()
{
char a='A',arr[26];
for(;a<'Z';a++)
arr[a-65]=a;
char  b[26];
char  *n=copy(arr,b,26);
for(a='A';a<'Z';a++)
printf("%d",*(n+a-65))


}
