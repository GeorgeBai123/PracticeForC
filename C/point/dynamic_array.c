# include "stdio.h"
# include "stdlib.h"
/*
# include "alloc.h"
*/
void main()
{
	int * array=NULL,num,i;
	printf("Input the number of element:\n");
	/* 申请动态数组使用的内存块 */
	scanf("%d",&num);

	array=(int *)malloc(sizeof(int) *num);
	if (array == NULL)
	{
		printf("out of memory ,press any key to quit...\n");
		exit(1);
	}
	printf("Input %d elements:\n", num);
	for( i = 0; i < num; i++)
		scanf("%d",&array[i]);
	printf(" %d elements are:\n", num);
	for( i = 0; i < num ; i++)
		printf("%d\t",array[i] );
	printf("\n");
	free(array);

}
