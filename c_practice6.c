#include <stdio.h>
#include <ctype.h>
#include <math.h>
struct funtest//11.15
{
		char name[10];
		int math;
};
void add5(struct funtest *p)
{
	p->math+=5;
}
int main()
{
	//10.15
	int arr[5]={31,17,33,22,16};
	int *ptr=arr,i;
	for(i=0;i<5;i++)
	{
		*(ptr+i)+=10;
	}
	printf("�}�C�ܬ�: ");
	for(i=0;i<5;i++)
	printf("%d ",*(ptr+i));
	printf("\n----------------------------\n");
	//10.18
	char *ptrc="We are best friends.";
	int count=0,j=0,lower_count=0;
	while(*(ptrc+j)!='\0')
	{
		count++;
		if(islower(*(ptrc+j)))
		lower_count++;
		j++;
	}
	printf("ptrc�ҫ��V���r�꦳%d�Ӧr��\n",count);
	printf("ptrc��%d�Ӥp�g�r��\n",lower_count);
	printf("-------------------\n");
	//11.1
	struct data{
		int num;
		char ch;
		double dist;
	}aaa;
	printf("1��int + 1��char + 1��double �@%d bytes\n",sizeof(int)+sizeof(char)+sizeof(double));
	printf("aaa�@���F%d bytes\n",sizeof(aaa));
	printf("���caaa�O�H2��double(8 bytes)�����զ�\n");
	printf("-----------------\n");
	//11.8
	struct date{
		int year;
		int month;
		int day;
	};
	struct time{
		struct date ymd;
		int hour;
		int minute;
		double second;
	};
	struct time now={{2022,1,28},1,35,30};
	printf("���ծɶ�:%04d/%02d/%02d  %02d:%02d:%02.2lf\n",now.ymd.year,now.ymd.month,now.ymd.day,now.hour,now.minute,now.second);
	printf("Struct time����ƫ��A�@��%d bytes\n",sizeof(now));
	printf("----------------------\n");
	//11.15
	struct funtest a={"stanley",80};
	printf("%s�쥻���ƾǦ��Z��%d��\n",a.name,a.math);
	add5(&a);
	printf("�g�L���ܫ�A%s���ƾǦ��Z�ܬ�%d��\n",a.name,a.math);
	printf("-------------------\n");
	//11.19
	char key;
	enum color
	{
		red=114,
		RED=82,
		green=103,
		GREEN=71,
		blue=98,
		BLUE=66,
	}shirt;
	do
	{
		printf("�п�Jr,g��b(�����j�p�g�A�Y��J��L�Э��s��J): ");
		scanf("%c",&key);
		fflush(stdin);
	}
	while((key!=red)&&(key!=green)&&(key!=blue)&&(key!=RED)&&(key!=GREEN)&&(key!=BLUE));
	shirt=key;
	switch(shirt)
	{
		case red:
		case RED:
			printf("�A��ܤF����\n");
			break;
		case blue:
		case BLUE:
			printf("�A��ܤF�Ŧ�\n");
			break;
		case green:
		case GREEN:
			printf("�A��ܤF���\n");
			break;	
	}
	printf("---------------------\n");
	return 0;
}
