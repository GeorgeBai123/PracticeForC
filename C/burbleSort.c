# include <stdio.h>

sort(int * x,int n)
{
	int i,j,k,t;
	for (i = 0; i < n-1; i++)
	{
		k=i;
		for (j = i+1; j < n; j++)
		{
			if (*(x+k)<*(x+j))
			{
				k=j;
			}
		}
		if (k!=i)
		{
			t=*(x+i);
			*(x+i) = *(x+k);
			*(x+k) = t;
		}
	}
}

_sort(int * x,int n)
{
	int i,j,k,t;
	for (i = 0; i < n-1; i++)
	{
		k=0;
		for (j = i+1; j < n; j++)
		{
			if (*(x+i)<*(x+j))
			{
				t=*(x+i);
				*(x+i) = *(x+j);
				*(x+j) = t;
				if (!k)k=1;
			}
		}
		if (!k)break;
	}
}

void main()
{
	int * p,i,array[10];
	p = array;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",p++);
	}
	p =array;
	_sort(p,10);
	for (p=array, i = 0; i < 10; i++)
	{
		printf("%4d", *p);
		p++;
	}
}