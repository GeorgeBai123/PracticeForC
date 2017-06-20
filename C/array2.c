# include <stdio.h>

void main()
{
	static int a[3][4] ={{2,4,6,8},{10,12,14,16},{18,20,22,24}};
	 int (* ptr)[4];
	int i,j;
	ptr=a;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", *( *( ptr+i )+j ) );
		}
		printf("\n");
	}
}
