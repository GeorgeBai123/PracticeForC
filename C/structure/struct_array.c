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
	/* 结构体数组初始化 */
	struct stu stud[4] = {{"liping",1,70.0,72.0,65.0},{"Yaoming",2,67.0,72.0,65.0},{"Liudong",3,67.0,72.0,65.0},{"Zhangwei",3,67.0,72.0,65.0}};

	float row[3];
	aver(stud,4);
	order(stud,4);
	output(stud,4);
	out_row(stud,4);
}

void aver(struct stu arr[],int n)
{
	int i,j;
	for( i = 0 ; i < n ; i++ )
	{
		arr[i].score[3] = 0;
		for( j = 0 ; j < 3 ; j++ )
			arr[i].score[3] += arr[i].score[j];
		arr[i].score[3] /= 3;
	}
}

void order(struct stu arr[],int n)
{
	struct stu temp;
	int i,j,x,y;
	for( i = 0 ; i < n-1 ; i++ )
		for( j = 0 ; j < n-1-i ; j++ )
			if(arr[j].score[3] > arr[j+1].score[3])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}

void output( struct stu arr[],int n)
{
	int i,j;
	printf("***********************table***************************\n");
	printf("-------------------------------------------------------\n");
	printf("|%10s|%8s|%7s|%7s|%7s|%7s|\n","Name","Number","English","Mathema","Physics","average" );
	printf("--------------------------------------------------------\n");
	for ( i = 0; i < n; i++)
	{
		printf("|%10s|%8ld|", arr[i].name,arr[i].number);
		for ( j = 0; j < 4; j++)
		{
			printf("%7.2f|", arr[i].score[j]);
		}
		printf("\n");
		printf("---------------------------------------------------\n");
	}
}

void out_row(struct stu arr[],int n)
{
	float row[4] = {0,0,0,0};
	int i,j;
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < n; j++)
			row[i] = row[i] + arr[j].score[i];
		row[i] = row[i]/n;
	}
	printf("|%19c|",' ');
	for(i=0;i<4;i++)
		printf("%7.2f|", row[i]);
	printf("\n----------------------------------------------------------\n");
}
