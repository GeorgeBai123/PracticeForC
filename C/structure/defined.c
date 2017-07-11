# include <stdio.h>

struct score
{
	float Chinese;
	float Math;
	float English;
};

struct student
{
	int  number;
	char name[9];
	char sex;
	int  age;
	char address[30];
	struct score achie;
};

void main()
{
	struct student Na = {10001,"wan li","M",19,"zhongshan road",78.0,67.0,90.0};
	struct student Nb = {10002,"li fang","F",18,"huajin road",80.0,77.0,86.0};
	printf("%d,%s,%s,%d,%s,%f,%f,%f\n", Na.number,Na.name,Na.sex,Na.age,Na.address,Na.achie.Chinese,Na.achie.Math,Na.achie.English);
	printf("%d,%s,%s,%d,%s,%f,%f,%f\n", Nb.number,Nb.name,Nb.sex,Nb.age,Nb.address,Nb.achie.Chinese,Nb.achie.Math,Nb.achie.English);
}
