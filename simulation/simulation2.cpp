#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
void play(int n)
{
	int i,m=0,t=0;
	for (int i = 0; i < n; i++)
	{
		t = rand()%6+1;
		m+=t;
		printf("\ttimes:%d,num%d;\n",i+1,t );
	}
	printf("\tcount:%d\n", m);
}

int main(void)
{
	int c; //参赛人数
	int n; //骰子数量
	int i,m;
	do
	{
		srand(time(NULL));
		printf("Input times:0quit:\n");
		scanf("%d",&c);
		if (c==0) break;
		for ( i = 0; i < c; i++)
		{
			printf("\n第%d位选手掷出的骰子为: n",i+1);
			play(n);
		}
		printf("\n");
		
	} while (1);
	return 0;
}