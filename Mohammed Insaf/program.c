//Mohamed Insaf
#include  <stdio.h>
void main()
{
	int i;
	void *pFrom="Hello",*pTo[10];
	copy(pFrom,pTo,4);

}
void copy(void *pFrom, void *pTo, int nBytes)
{
	int i;
	for(i=0;i<nBytes;i++)
	{
		*(pTo+i)=*(pFrom+i);
	}
}

