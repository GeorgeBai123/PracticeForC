# include <stdio.h>

void main(int argc ,char * argv[])
{
	int i;
	printf("argc value:%d\n", argc);
	printf("�����в������ݷֱ�Ϊ��");
	for( i=0;i<argc;++i)	
		printf("argv[%d]:%s\n", i,argv[i]);
}
