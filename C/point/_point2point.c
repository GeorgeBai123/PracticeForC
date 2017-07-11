# include <stdio.h>
# include <string.h>

void sort(char ** ptrl,int n);

void main()
{
    char ** ptr,str[4][20];
    int i;clrscr();
    for ( i = 0; i < 4; i++)
        gets(str[i]);
    printf("\n");
    for ( i = 0; i < 4; i++)
        *(ptr+i) = str[i];
    printf("Original string:\n");
    for ( i = 0; i < 4; i++)
        printf("%s\n", *(ptr+i)); 
    sort(ptr,4);
    printf("Sorted string:\n");
    for ( i = 0; i < 4; i++)
        puts(*(ptr+i));
}

void sort(char ** ptrl,int n)
{
    char * temp;
    int i , j;
    for ( i = 0; i < n-1; i++)
        for ( j = 0; j < n-i-1; j++)
            if (strcmp(*(ptrl+j),*(ptrl+j+1))>0)
            {
                strcpy(temp,*(ptrl+j+1));
                strcpy(*(ptrl+j+1),*(ptrl+j));
                strcpy(*(ptrl+j),temp);
            }
    printf("Sorted string:\n");
    for ( i = 0; i < 4; i++)
        printf("%s\n", *(ptrl+i));
}
