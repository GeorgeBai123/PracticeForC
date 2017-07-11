# include <stdio.h>
# include <string.h>

void main()
{
	char * p,* str="How do you do!";
	printf("%s\n", str);
	p=str+strlen(str);
	while(--p>=str)
	{
		printf("%c", *p);
	}
	printf("\n");
}

