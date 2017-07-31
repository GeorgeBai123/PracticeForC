# include <stdlib.h>
# include <malloc.h>

struct node
{
	int num;
	char str[20];
	struct node * next;
};

void main()
{
	/* 函数声明 */
	struct node * create();
	struct node * insert();
	struct node * delet();
	void print();
	struct node * head;
	char str[20];
	int n;
	head=NULL; /* 做空表 */
	head=create(head);         /* 调用函数创建以head 为头的链表 */
	print(head);               /* 调用函数输出结点 */
	printf("\n input inserted num,name:\n");
	gets(str);                 /* 输入学号 */
	n = atoi(str);
	gets(str);                 /* 输入姓名 */
	head = insert(head,str,n); /* 将结点插入链表 */
	print(head);               /* 函数调用输出结点 */
	printf("\n input deleted num,name:\n");
	gets(str);                 /* 输入删除姓名 */
	head = delet(head,str);    /* 调用函数删除结点 */
	print(head);               /* 函数调用输出结点 */
	return;
}

struct node * create(struct node * head) 
{
	char temp[30];
	struct node * p1, * p2;
	p1=p2=(struct node *)malloc(sizeof(struct node)); 
	printf("input num,name:\n");
	printf("exit:double times Enter!\n");
	gets(temp);
	gets(p1->str);
	p1->num = atoi(temp);
	p1->next= NULL;
	while(strlen(p1->str) > 0)              
	{
		if (head == NULL)head =p1;       
		else p2->next = p1;              
		p2=p1;
		p1 = (struct node *)malloc(sizeof (struct node));   
		printf("input num,name:\n");
		printf("exit:double times Enter!\n");
		gets(temp);
		gets(p1->str);
		p1->num = atoi(temp);
		p1->next = NULL;
	}
	return head;                         
};


struct node * insert(struct node * head,char * pstr, int n)
{
	struct node * p1,* p2,* p3;
	p1 = (struct node *)malloc(sizeof(struct node));
	strcpy(p1->str,pstr);
	p1->num = n;
	p2=head;
	if (head == NULL)                  /* 如果原链表为空表 */
	{
		/* 将p1指向的结点作为头结点 */
		head = p1;
		p1->next = NULL;
	}
	else
	{
		/* 如果插入的数值比p2 结点的值大并且p2不是尾结点，则表明待插入结点不在p2 结点前*/
		while(n>p2->num && p2->next != NULL)
		{ 
			/* p3 指向p2 ,p2向后移动 */
			p3=p2;
			p2=p2->next;
		}
		/* 当满足条件，则表示插入点在p2结点前 */
		if (n<=p2->num)
		{
			/* 插入到原来的结点之前 */
			if (head == p2)
			{
				head = p1;
				p1->next = p2;
			}
			/* 插入到p2之前p3之后 */
			else
			{
				p3->next = p1;
				p1->next = p2;
			}
		}
		/* 插入到尾结点之后 */
		else
		{
			p2->next = p1;
			p1->next = NULL;
		}
	}

	return(head);
}

struct node * delet(struct node * head,char * pstr)
{
	struct node * temp,*p;
	temp = head;
	if (head == NULL)
	{
		printf("\nList is null!\n");
	}
	else
	{
		temp = head;
		/* 当temp 结点不是要删除的结点，并且不是尾结点*/
		while(strcmp(temp->str,pstr) != 0 && temp->next != NULL)
		{
			p=temp;
			/* temp 后移一个结点 */
			temp=temp->next;
		}
		/* 若找到删除结点 */
		if(strcmp(temp->str,pstr) == 0)
		{
			/* 若为头，取第二 */
			if (temp == head)
			{
				head = head->next;
				free(temp);
			}
			else
			{
				/* 将下一结点的地址赋予前一结点 */
				p->next = temp->next;
				printf("Delete string:%s\n", temp->next);
				free(temp);
			}
		}
		/* 找不到要删除的结点 */
		else printf("\n No find string!\n");
	}
	return(head);
}

void print(struct node * head)
{
	struct node * temp;
	temp = head;
	printf("\n Output string:\n");
	while( temp != NULL)
	{
		printf("\n%d----%s\n", temp->num,temp->str);
		temp = temp->next;
	}
	return ;
}
