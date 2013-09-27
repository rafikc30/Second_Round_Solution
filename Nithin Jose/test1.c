//Implement function:Nithin Jose
#include<stdio.h>
void *copy(void *pFrom,void *pTo,int nBytes)
{
int n;
for(n=0;pFrom!='\0'||n<nBytes;n++)		//Function to transfer characters
	pTo[n]=pFrom[n];
	pTo[n+1]='\0';

}
main()
{
char from[50],to[50];
int byt;
printf("\nInput array\n");			//Inputting array
gets(from);
printf("\nInput number of bytes to be transferred\n");		//Inputting no of bytes to be transferres
scanf("%d",&byt);
copy(&from,&to,byt);
printf("\nThe the copied array is\n");
puts(to);
}
