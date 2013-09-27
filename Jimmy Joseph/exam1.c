//question 1
#include<stdio.h>
#include<string.h>
int x=0;
char *copy(char *pfrom,char *pto,int nbytes)
{
int i;
for(i=0;i<nbytes;i++)
	{
	*pto[i]=*pfrom[i];
	}
*pto[i+1]='\0';
x=1;
return &pto;
}

main()
{
char p[20],q[20],*r;
int n;
printf("Enter pfrom and pto: ");
gets(p);
gets(q);
printf("Enter the number of bytes : ");
scanf("%d",&n);
r=copy(p,q,n);
printf("%d\n",x);
printf("Copied is : %s",r);

}

//jimmy joseph
