# include <stdio.h>

/* how to defined a structure */

/*
struct  结构体名
{
	类型标识符 成员1；
	类型标识符 成员2；
	...
	类型标识符 成员n；
};

*/

/* A student with information and score */

struct score
{
	float Chinese;
	float Math;
	float English;
};

struct student
{
	int number;
	char name[9];
	char sex;
	int age;
	char address[30];
	struct score achie /* achie 是struct score 类型 */
}Na,Nb,Nc; /* 结构体类型变量 */


void main()
{
	int Total; 
	Na.age =18;
	++Na.age;
	Total = Na.age+Nb.age+Nc.age;
	Nb.age = Na.age;
	strcpy(Na.address,"ShangHai");
	strcpy(Nb.address,Na.address);
	Nc = Na;
	printf("%d;%s;\n", Na.age,Na.address);
	printf("%d;%s;\n", Nb.age,Nb.address);
	printf("%d;%s;\n", Nc.age,Nc.address);
	printf("%d\n", Total);
	printf("========================================\n");
	Na.achie.Chinese = 70.0;
	Na.achie.Math = 86.0;
	Na.achie.English = Nc.achie.English;
	Nb.achie=Na.achie;
	Nc.achie.English = 97.0;
	printf("%f;%f;%f\n", Na.achie.Chinese,Na.achie.English,Na.achie.Math);
	printf("%f;%f;%f\n", Nb.achie.Chinese,Nb.achie.English,Nb.achie.Math);
	printf("%f;%f;%f\n", Nc.achie.Chinese,Nc.achie.English,Nc.achie.Math);

	scanf("%f",&Na.achie.Chinese);
	printf("%.1f\n", Na.achie.Chinese);
}
