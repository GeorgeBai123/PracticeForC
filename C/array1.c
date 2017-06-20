# include <stdio.h>

main()
{
	int i,a[5],*ptr=a;
	for (i = 0; i < 5; i++)
	{
		scanf("%d",ptr++);
//		scanf("%d",ptr+I);
//		scanf("%d",&ptr[i]);
//		scanf("%d",a+i);
//		scanf("%d",a[i]);
	}
	ptr=a;
	for ( i = 0; i < 5; i++)
	{
		printf("%4d ", * ptr++);
		printf("%4d ", * (ptr+i));
		printf("%4d ", * (a+i));
		printf("%4d ", a[i]);
		printf("%4d ", ptr[i]);
	}

}
