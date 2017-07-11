# include <stdio.h>

int * seek(int (* ptr_row)[3])
{
	int i=0,*ptr_col;
	ptr_col = *(ptr_row +1);
	for(;i<3;i++)
		if(*(* ptr_row+i)<60)
		{
			ptr_col = * ptr_row;
			break;
		}
	return (ptr_col);
}


void main()
{
	int grade[3][3] = {{55,65,75},{65,55,85},{75,80,90}};
	int i,j,* ptr;
	for(i =0;i<3;i++)
	{
		ptr = seek(grade+i);
		if(ptr == *(grade +i))
		{
			printf("No.%d grade list:\n", i+1);
			for(j=0;j<3;j++)
				printf("%4d\n", *(ptr + j));
			printf("\n");
		}
	}
}
