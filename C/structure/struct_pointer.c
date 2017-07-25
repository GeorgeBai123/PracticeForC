# include <stdio.h>

void main()
{
    struct test
    {
        int i,j;
        char m,n;       
    };

    struct test a,b;
    struct test *pa,*pb;
    pa = &a;
    pb = &b;
    pa->i = pa->j = 10;
    pa->m = pa->n = 'H';
    /*  10 10 H H */
    printf("%d,%d,%c,%c\n",pa->i,pa->j,pa->m,pa->n );
    /* 将结构体a赋值于另一相同结构的结构体变量b */
    b=a;
    /*  10 10 H H */
    printf("%d,%d,%c,%c\n",pb->i,pb->j,pb->m,pb->n );
    /*  11 10 G H */
    printf("%d,%d,%c,%c\n",++pb->i,pb->j--,--pb->m,pb->n++ );
    /*  11 9 G I */
    printf("%d,%d,%c,%c\n",pb->i,pb->j,pb->m,pb->n );
    /* 将指针pb也指向结构体变量 a */
    pb=pa;
    /*  11 10 G H */
    printf("%d,%d,%c,%c\n",++pa->i,pa->j--,--pa->m,pa->n++ );
    /*  11 9 G I */
    printf("%d,%d,%c,%c\n",pb->i,pb->j,pb->m,pb->n );

}
