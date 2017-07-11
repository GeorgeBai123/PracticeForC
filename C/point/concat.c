#include <stdio.h>
#include <stdlib.h>


void catstr(char * dest,char * src);

void main()
{
    char * dest,* src="help you?";
    if ((dest = (char * )malloc(80))== NULL)
    {
        printf("no memory\n");
        exit(1);
    }
    dest="Can I";
    catstr(dest,src);
    puts(dest);
}

void catstr(char * dest,char * src)
{
    while(* dest) dest++;
    while(* dest++ = *src++);
}
