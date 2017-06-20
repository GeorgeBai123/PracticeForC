# include <stdio.h>

void main()
{
	int num1,num2;
	int * num1_p=&num1, * num2_p=&num2,* pointer;
	printf("Input the first number:\n");
	scanf("%d",num1_p);
	printf("Input the second number:\n");
	scanf("%d",num2_p);
	printf("Num1=%d,Num2=%d\n", num1,num2);
	if (*num1_p > *num2_p)
	{
		pointer = num1_p,num1_p=num2_p,num2_p=pointer;
	}
	printf("Min=%d,max=%d\n", *num1_p,*num2_p);

}