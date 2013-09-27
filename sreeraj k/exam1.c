#include<stdio.h>
char* copy(char *pfrom,char *pto,int nbytes);
void main()
{
	int i=0,n;
	char pfrom[25];
	char pto[25];
	char *pto2;
	printf("enter the string:");
	do{
	*(pfrom+i)=getchar();
	i++;
	}while(*(pfrom+i-1)!='\0');	
	printf("enter the number of bytes to be transfered:");
	scanf("%d",&n);
	pto2=copy(pfrom,pto,n);
	printf("%d bytes are transfered ",n);
	for(i=0;*(pto+i)!='\0';i++)
	{
	putchar(*(pto+i));
	}

}
char* copy(char *pfrom,char *pto,int nbytes)
{
int i=0;
do
{
*(pto+i)=*(pfrom+i);
i++;
}
while(i<nbytes&&*(pto+i)!='\0';i++);
return pto;
}
