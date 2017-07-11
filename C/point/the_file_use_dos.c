# include <stdio.h>

void main(int argc ,char * argv[])
{
	int i;
	printf("argc value:%d\n", argc);
	printf("命令行参数内容分别为：");
	for( i=0;i<argc;++i)	
		printf("argv[%d]:%s\n", i,argv[i]);
}
