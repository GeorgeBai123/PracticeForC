# include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
void result(int (*pf)(),int a, int b);

void main()
{
	int i,j;
	int ( *pf )();
	scanf("%d,%d",&i,&j);

	pf=add;
	result(pf,i,j);

	pf=sub;
	result(pf,i,j);	

	pf=mul;
	result(pf,i,j);

	pf=div;	
	result(pf,i,j);
	printf("\n");
}

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
void result(int (*p)(),int a, int b)
{
	int value;
	value = (*p)(a,b);
	printf("%d\t",value );
}
