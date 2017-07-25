# include <stdio.h>

struct stu
{
	char name[20];
	long number;
	float score[4];
};

void main()
{
	void input();
	void aver();
	void order();
	void output();
	void out_row();
	struct stu stud[4] = {{"Liping",1,67.0,72.0,65.0},{"Yaoming",2,77.0,73.0,65.0},{"Liudong",3,67.0,72.0,65.0},{"Zhangwei",1,67.0,72.0,65.0}};
	float row[3];
	aver(stud,4);
	order(stud,4);
	output(stud,4);
	out_row(stud,4);
}

void aver(struct stu * ptr,int n)
{
	int i,j;
	for ( i = 0; i < n; i++)
	{
		(ptr+i)->score[3] =0;
		for ( j = 0; j < 3; j++)
			(ptr+i)->score[3] += (ptr+i)->score[j];
		(ptr+i)->score[3] /= 3;
	}
}

void order(struct stu * ptr,int n)
{
	struct stu temp;
	int i,j,x,y;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n-i-1; j++)
			if ((ptr+j)->score[3] > (ptr+j+1)->score[3])
			{
				temp = * (ptr+j);
				* (ptr+j) = * (ptr+j+1);
				* (ptr+j+1) = temp;
			}
	}
}

void output(struct stu * ptr,int n)
{
	int i,j;
	printf("**************************TABLE***************************\n");
	printf("------------------------------------------------------------\n");
	printf("|%10s|%8s|%7s|%7s|%7s|%7s|\n", "Name","Number","English","Nathema","Physics","average");
	printf("------------------------------------------------------------\n");
	for ( i = 0; i < n; i++)
	{
		printf("|%10s|%8ld|",(ptr+i)->name,(ptr+i)->number );
		for ( j = 0; j < 4; j++)
			printf("%7.2f|",(ptr+i)->score[j] );
		printf("\n");
		printf("------------------------------------------------------------\n");
	}
}

void out_row(struct stu * ptr,int n)
{
	float row[4] = {0,0,0,0};
	int i,j;

	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < n; j++)
			row[i] = row[i] + (ptr +j)->score[i];
		row[i] = row[i]/n;
	}
	printf("%19c\n", ' ');
	for ( i = 0; i < 4; i++)
		printf("%7.2f|", row[i]);
	printf("\n----------------------------------------------------------\n");
}