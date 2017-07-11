# include <stdio.h>

void exchange(int * ptr1,int * ptr2)
{
	int temp;
	temp = * ptr1,* ptr1 = * ptr2,*ptr2 = temp;
}

void main()
{
	int num1,num2,num3;
	printf("Input three numbers:\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);

	printf("num1=%d;num2=%d;num3=%d;\n",num1,num2,num3 );

	if(num1<num2)exchange(&num1,&num2);
	if(num1<num3)exchange(&num1,&num3);
	if(num2<num3)exchange(&num2,&num3);

	printf("%d;%d;%d;\n", num1,num2,num3);
}
