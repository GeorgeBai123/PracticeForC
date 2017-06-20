# include <stdio.h>

void main()
{
	static int a[3][4] = {{2,4,6,8},{10,12,14,16},{18,20,22,24}};
	printf("%x,%x,%x,%x,%x,%d\n", a,*a,a[0], &a[0],&a[0][0],a[0][0]);
	printf("%x,%x,%x,%x,%x,%d\n", a+1,*(a+1),a[1], &a[1],&a[1][0],a[1][0]);
	printf("%x,%x,%x,%x,%x,%d\n", a+2,*(a+2),a[2], &a[2],&a[2][0],a[2][0]);

	printf("%x,%x\n", a[1]+1,*(a+1)+1);
	printf("%d,%d\n", *(a[1]+1),*(*(a+1)+1));
}