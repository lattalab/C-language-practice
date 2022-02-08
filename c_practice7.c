#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int insertElement(int *arr,int item,int pos,int length)
{
	int *news=malloc(sizeof(int)*(length+1));
	int i;
	for(i=0;i<pos;i++)
	{
		*(news+i)=*(arr+i);
	}
	*(news+pos)=item;
	for(i=pos+1;i<(length+1);i++)
	{
		*(news+i)=*(arr+i-1);
	}
	for(i=0;i<length+1;i++)
	arr[i]=news[i];
	return length+1; 
}
struct node
{
	int num;
	struct node *next;
};
struct linkedlist{
	struct node *head;
	struct node *tail;
};
void create(struct linkedlist *q,int data)
{
	struct node *news=malloc(sizeof(struct node));
	news->num=data;
	news->next=NULL;
	if(q->head==NULL)
	{
		q->head=q->tail=news;
		return;
	}
	q->tail->next=news;
	q->tail=news; 
}
void insert(struct linkedlist *q,int data,int pos)
{
	struct node *news=malloc(sizeof(struct node));
	news->num=data;
	news->next=NULL;
	
	struct node *cur=q->head;
	int count=1;
	while(count!=pos&&cur!=NULL)
	{
		cur=cur->next;
		count++;
	}
	if(count!=pos)
	{
	printf("無第%d個節點，請重新輸入\n",pos);
	return;
	}
	news->next=cur->next;
	cur->next=news;
}
void Delete(struct linkedlist *q,int data)  
{
	struct node *cur=q->head,*pre=q->head;
	while(cur->num!=data)
	cur=cur->next;
	while(pre->next->num!=data)
	pre=pre->next;
	pre->next=cur->next;
	free(cur);
}
void deletehead(struct linkedlist *q)
{
	struct node *cur=q->head;
	if(q->tail==q->head)
	{
		free(q->tail);
		q->head=q->tail=NULL;
		return;
	}
	q->head=cur->next;
	free(cur);
}
void deletetail(struct linkedlist *q)
{
	struct node *cur=q->head;
	if(q->tail==q->head)
	{
		free(q->tail);
		q->head=q->tail=NULL;
		return;
	}
	while(cur->next!=q->tail)
	cur=cur->next;
	
	free(q->tail);
	q->tail=cur;
	q->tail->next=NULL; 
}
int main()
{
	//14.1
	int *ptr=malloc(sizeof(int));
	*ptr=12;
	*ptr=(*ptr)*(*ptr);
	printf("%d\n",*ptr);
	printf("-----------------------\n");
	//14.7
	int i,arr[100]={12,56,37,63};
	int len=insertElement(arr,10,2,4);
	printf("\n在原本的arr[2]與arr[3]之間插入10，長度會變為%d\n",len);
	printf("arr變為: ");
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	printf("\n-------------------------\n");
	//14.9
	struct node a,b,c,d;
	a.num=12;
	a.next=&b;
	b.num=38;
	b.next=&c;
	c.num=64;
	c.next=&d;
	d.num=37;
	d.next=NULL;
	struct node *cur=&a;
	printf("節點連結: ");
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	//14.10
	struct node e;
	e.num=92;
	b.next=&e;
	e.next=&c;
	printf("\n\n在38跟64間插入新節點後的連結: ");
	cur=&a;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	//14.11
	a.next=&e;
	printf("\n\n刪除資料為38的節點後的連結: ");
	cur=&a;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n-------------------------\n");
	//14.12+14.13+14.14 use function+malloc to create linked list(不用比大小)
	struct linkedlist p;
	p.head=p.tail=NULL;
	create(&p,12);
	create(&p,38);
	create(&p,64);
	create(&p,37);
	cur=p.head;
	printf("節點連結: ");
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n在第三個節點後插入資料值為47的新節點後的連結: ");
	insert(&p,47,3);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n刪除資料第二跟第三節點後的連結: ");
	Delete(&p,38);
	Delete(&p,47);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	//bonus 要刪頭尾的話
	printf("\n\n刪除第一節點後的連結: ");
	deletehead(&p);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n刪除最後一個節點後的連結: ");
	deletetail(&p);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n-------------------------\n");
	return 0;
}
