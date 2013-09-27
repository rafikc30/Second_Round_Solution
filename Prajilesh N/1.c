#include<stdio.h>

void* copy(void *pFrom,void *pTo,int nBytes)
{
	int i;
	char *x,*y;
	y=pTo;
	x=pFrom;
	for(i=0;i<nBytes;i++)
		*(y+i)=*(x+i);

//return pTo;	

}
int main()
{
	int i;
	void *p,*q;
	char a[]="abcdefg";
	char b[]="xyz";
	p=&a;
	q=&b;
	copy(p,q,5);
	for(i=0;i<5;i++)
		printf("%c",b[i]);
}
