# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char * substr(char * dest,char * src,int begin,int len)
{
	int srclen=strlen(src);
	if (begin>srclen || !srclen || begin<0 || len<0)	
	{
		dest[0]='\0';
	}
	else
	{
		if (!len||(begin+len)>srclen)
		{
			len=srclen-begin+1;
		}
		memmove(dest,src+begin-1,len);
		dest[len]='\0';
	}
	return dest;
}

void main()
{
	char * dest;
	char src[] = "C Programing Language";
	
//	char *irc;
//	scanf("%s",&irc);
//	int len=strlen(irc);
//	char *src=irc;

	if ((dest=(char  *)malloc(80)) == NULL)
	{
		printf("no memory\n");
		exit(1);
	}
	printf("%s\n", substr(dest,src,15,4));
	printf("%s\n", substr(dest,src,15,0));
	free(dest);
	
}

