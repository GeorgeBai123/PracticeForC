#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
int main()
{
	int n,m,i=0;
	srand(time(NULL));
	n = rand()%100+1;
	do
	{
		printf("输入所猜的数字");
		scanf("%d",&m);
		i++;
		if(m>n)
			printf("错误!所猜的数太大了!\n");
		else if(m<n)
			printf("错误!所猜的数太小了!\n");
	} while (m!=n);
	printf("答对了!\n");
	printf("共猜了%d次.\n", i);
	if(i<=5)
		printf("你太聪明了,这么快就猜出来了!\n");
	else if(i>5)
		getch();
	return 0 ;

}
