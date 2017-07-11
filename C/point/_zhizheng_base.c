# include <stdio.h>
void main()
{
	int n,* nptr;
	* nptr=10;
	n=20;
//	scanf("%d,%d",nptr,&n);
	printf("%d,%d\n",*nptr,n);

//	nptr=&n;
//	printf("%d,%d\n", *nptr,n);
//
//	n=30;
//	printf("%d,%d\n", *nptr,n);
//
//	* nptr = 40;
//	printf("%d,%d\n", *nptr,n);
}
