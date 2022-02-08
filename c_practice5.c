#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define ROW 4
#define COL 5
void add(int a[ROW][COL],int b[ROW][COL], int c[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main()
{
	//9.6
	int array[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
	int len=sizeof(array)/sizeof(int);
	printf("array的元素個數為: %d\n",len);
	int count=0,i;
	for(i=0;i<len;i++)
	{
		if(array[i]>=3&&array[i]<=6)
		count++;
	}
	printf("在陣列array的元素中的值介於3~6之間的個數為: %d\n",count);
	printf("----------------\n");
	//9.13
	int sale[3][5]={{33*12,32*16,56*10,45*14,33*15},{77*12,33*16,68*10,45*14,23*15},{43*12,55*16,43*10,67*14,65*15}};
	int sum=0,j,k;
	for(j=0;j<3;j++)
	{
		for(k=0;k<5;k++)
		{
			sum+=sale[j][k];
		}
		printf("銷售員 %d 的銷售總金額為: %d 元\n",j+1,sum);
		sum=0;
	}
	printf("\n");
	int sumb=0;
	for(j=0;j<5;j++)
	{
		for(k=0;k<3;k++)
		{
			sumb+=sale[k][j];
		}
		printf("產品 %c 的銷售總金額為: %d 元\n",j+65,sumb);
		sumb=0;
	}
	printf("\n----------------\n");
	//9.22 二維陣列相加 
	int a[ROW][COL],b[ROW][COL],c[ROW][COL]={0};
	srand(time(NULL));
	for(j=0;j<ROW;j++)
	{
		for(k=0;k<COL;k++)
		{
			a[j][k]=rand()%100+1;
			b[j][k]=rand()%100+1;
		}
	}
	add(a,b,c);
	printf("\n4X5的陣列c為: \n\n");
	printf("      第1行 第2行 第3行 第4行 第5行\n");
	for(j=0;j<ROW;j++)
	{
		printf("第%d列: ",j+1);
		for(k=0;k<COL;k++)
		{
			printf("%-5d ",c[j][k]);
		}
		printf("\n");
	}
	printf("\n-----------------\n");
	return 0;
}
