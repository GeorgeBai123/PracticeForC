# include <stdio.h>

struct data
{
	int year,month,day;
};

struct stu
{
	char name[20];
	long number;
	struct data birthday;
};

void main()
{
	int i;
	/* 定义结构体数组并初始化 */
	struct stu *p,student[4] = {{"Zhou ping",1,1983,7,2},{"Wang ling",2,1984,2,18},{"Hu bo",3,1982,5,16},{"Hua qiang",4,1982,7,21},};
	/* 将数组的首地址赋值给指针p,p指向一维数组 student */
	p=student;
	/* 指针法 */
	printf("\n1 --- Output name,number,year,month,day\n");
	for ( i = 0; i < 4; i++)
		printf("%16s%7ld%8d/%d/%d\n", (p+i)->name,(p+i)->number,(p+i)->birthday.year,(p+i)->birthday.month,(p+i)->birthday.day);
	printf("\n2--- Output name,number,year,month,day\n");
	for ( i = 0; i < 4; i++,p++)
		printf("%16s%7ld%8d/%d/%d\n", p->name,p->number,p->birthday.year,p->birthday.month,p->birthday.day);
	/* 地址法 */
	printf("\n3--- Output name,number,year,month,day\n");
	for ( i = 0; i < 4; i++)
		printf("%16s%7ld%8d/%d/%d\n", (student+i)->name,(student+i)->number,(student+i)->birthday.year,(student+i)->birthday.month,(student+i)->birthday.day);

	p=student;
	/* 指针的数组描述法 */
	printf("\n4--- Output name,number,year,month,day\n");
	for ( i = 0; i < 4; i++)
		printf("%16s%7ld%8d/%d/%d\n", p[i].name,p[i].number,p[i].birthday.year,p[i].birthday.month,p[i].birthday.day);
}
