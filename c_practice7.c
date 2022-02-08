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
	printf("�L��%d�Ӹ`�I�A�Э��s��J\n",pos);
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
	printf("\n�b�쥻��arr[2]�Parr[3]�������J10�A���׷|�ܬ�%d\n",len);
	printf("arr�ܬ�: ");
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
	printf("�`�I�s��: ");
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
	printf("\n\n�b38��64�����J�s�`�I�᪺�s��: ");
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
	printf("\n\n�R����Ƭ�38���`�I�᪺�s��: ");
	cur=&a;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n-------------------------\n");
	//14.12+14.13+14.14 use function+malloc to create linked list(���Τ�j�p)
	struct linkedlist p;
	p.head=p.tail=NULL;
	create(&p,12);
	create(&p,38);
	create(&p,64);
	create(&p,37);
	cur=p.head;
	printf("�`�I�s��: ");
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n�b�ĤT�Ӹ`�I�ᴡ�J��ƭȬ�47���s�`�I�᪺�s��: ");
	insert(&p,47,3);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n�R����ƲĤG��ĤT�`�I�᪺�s��: ");
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
	//bonus �n�R�Y������
	printf("\n\n�R���Ĥ@�`�I�᪺�s��: ");
	deletehead(&p);
	cur=p.head;
	while(cur!=NULL)
	{
		printf("%d",cur->num);
		cur=cur->next;
		if(cur!=NULL)
		printf("->");
	}
	printf("\n\n�R���̫�@�Ӹ`�I�᪺�s��: ");
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
