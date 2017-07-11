# include <stdio.h>

void main()
{
	int a[3][4],*ptr;
	int i,j;
	ptr = a[0];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++);
		{
			scanf("%d",ptr++);
		}
	}

	ptr = a[0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d ", *ptr++);
		}
	}
	printf("\n");
}