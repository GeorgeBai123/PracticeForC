# include <stdio.h>

void main()
{
	int a[3][4] = {{65,67,66,60},{80,83,87,88},{90,99,91,95}};
	int * p,max,min,i,j;
	float average=0.0;
	p = a;
	max = min = a[0][0];

	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			/* a[i][j]>max 更新max */
			if(*(p+i * 4+j)>max)max = *(p+i * 4+j);
			/* a[i][j]<min 更新min */
			if(*(p+i * 4+j)<min)min = *(p+i * 4+j);
			average += *(p+i * 4+j);
		}

	printf("max=%d\n", max);
	printf("min=%d\n", min);
	printf("average=%f\n", average/12);
}