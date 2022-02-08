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
	printf("陣列變為: ");
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
	printf("ptrc所指向的字串有%d個字元\n",count);
	printf("ptrc有%d個小寫字元\n",lower_count);
	printf("-------------------\n");
	//11.1
	struct data{
		int num;
		char ch;
		double dist;
	}aaa;
	printf("1個int + 1個char + 1個double 共%d bytes\n",sizeof(int)+sizeof(char)+sizeof(double));
	printf("aaa共佔了%d bytes\n",sizeof(aaa));
	printf("結構aaa是以2個double(8 bytes)為單位組成\n");
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
	printf("測試時間:%04d/%02d/%02d  %02d:%02d:%02.2lf\n",now.ymd.year,now.ymd.month,now.ymd.day,now.hour,now.minute,now.second);
	printf("Struct time的資料型態共有%d bytes\n",sizeof(now));
	printf("----------------------\n");
	//11.15
	struct funtest a={"stanley",80};
	printf("%s原本的數學成績為%d分\n",a.name,a.math);
	add5(&a);
	printf("經過改變後，%s的數學成績變為%d分\n",a.name,a.math);
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
		printf("請輸入r,g或b(不分大小寫，若輸入其他請重新輸入): ");
		scanf("%c",&key);
		fflush(stdin);
	}
	while((key!=red)&&(key!=green)&&(key!=blue)&&(key!=RED)&&(key!=GREEN)&&(key!=BLUE));
	shirt=key;
	switch(shirt)
	{
		case red:
		case RED:
			printf("你選擇了紅色\n");
			break;
		case blue:
		case BLUE:
			printf("你選擇了藍色\n");
			break;
		case green:
		case GREEN:
			printf("你選擇了綠色\n");
			break;	
	}
	printf("---------------------\n");
	return 0;
}
