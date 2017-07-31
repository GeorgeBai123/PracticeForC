# include <stdio.h>
# include <stdlib.h>

/* 链表的结构 */
struct node
{
	int num;
	struct node * next;
};

void main()
{
	struct node * create(); /* 函数声明 */
	void print();
	struct node * head;     /* 定义头指针 */
	head = NULL;            /* 建一个空指针 */
	head = create(head);    /* 创建单链表 */
	print(head);            /* 打印单链表 */
}

struct node * create(struct node * head) /* 函数返回的是与结点相同类型的指针 */
{
	struct node * p1, * p2;
	p1=p2=(struct node *)malloc(sizeof(struct node)); /* 申请新的节点 */
	scanf("%d",&p1->num);                /* 输入节点的值 */
	p1->next = NULL;                     /* 将新节点的指针置为空 */
	while(p1->num != -999)               /* 输入结点的数值大于0 */
	{
		if (head == NULL)head =p1;       /* 空表接入表头 */
		else p2->next = p1;              /* 非空表，接到表尾 */
		p2=p1;
		p1 = (struct node *)malloc(sizeof (struct node));   /* 申请下一个新节点 */
		scanf("%d",&p1->num);            /* 输入结点的值 */
		p1->next = NULL;                 /* 将新结点的指针置为空 */
	}
	return head;                         /* 返回链表的头指针 */
};

void print(struct node * head)           /* 输出以head为头的链表各结点的值 */
{
	struct node * temp;
	temp=head;                           /* 取得链表的头指针 */
	while(temp != NULL)                  /* 只要是非空表 */
	{
		printf("%6d", temp->num);        /* 输出链表结点的值 */
		temp = temp->next;               /* 跟踪链表增长 */
	}
}
