#include <stdio.h>
#include <stdlib.h>
// #include <alloc.h>


void catstr(char * dest,char * src);

void main()
{
    char * dest,* src="help you?";
    // 申请分配内存，对于字符数组不需要，系统为数组分配内存空间
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


// void catstr(char * dest,char * src)
// {
//     while(* dest++);
//     while(* dest++ = * src++);
// }