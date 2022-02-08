#include <stdio.h>
#include <math.h>
int main()
{
	//7.3 1~n的所有奇數和
	int n,i,sum=0;
	printf("請輸入一數字: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;	
	} 
	printf("1~n的所有奇數和為: %d\n",sum);
	printf("-------------------------\n");
	//7.5 求1~100中，同時被3跟8整除之所有整數的總和
	int sumi=0;
	for(i=1;i<=100;i++)
	{
		if(i%3==0&&i%8==0)
		{
			sumi+=i;
		}
	} 
	printf("\n1~100中，同時被3跟8整除之所有整數的總和為: %d\n",sumi);
	printf("-----------------\n");
	//7.6 找因數
	printf("\n請輸入一數字: ");
	scanf("%d",&n);
	printf("%d的所有因數為: ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d ",i);
	}
	printf("\n----------------\n");
	//7.9 計算1^2 - 2^2 + 3^2 -4^2.......+49^2-50^2
	int square_sum=0;
	for(i=1;i<=50;i++)
	{
		if(i%2!=0)
		{
			square_sum+=pow(i,2);
		}
		else
		square_sum-=pow(i,2);
	} 
	printf("\n1^2 - 2^2 + 3^2 -4^2.......+49^2-50^2 的值為: %d\n",square_sum);
	printf("-------------------\n");
	//7.10 1+1/2+1/3+....+1/n的總和 
	double sumx=0;
	printf("\n請輸入一數字: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sumx+=(1.0/i);
	}
	printf("1~n的倒數和為: %.2lf\n",sumx);
	printf("-------------------\n");
	//7.14 一條繩子3000m 每天剪去一半長度 要花幾天才會短於5m
	double rope=3000,day=0;
	while(rope>5)
	{
		rope/=2;
		day++;	
	} 
	printf("\n3000m的繩子總共需花費 %.2lf天才變成小於5m長\n",day);
	printf("--------------\n");
	//7.19 1+到n>=1000的最小n值
	int suma=0,j=1;
	do
	{
		suma+=j;	
		j++;
	} 
	while(suma<1000);
	printf("\n能使1加到n的最小n值為: %d\n",j-1);
	printf("-------------------\n\n");
	//7.27 印出圖形
	int k;
	for(i=1;i<=5;i++) //行數 
	{
		for(j=4-(i-1);j>0;j--) //先印空白 
		{
			printf(" ");
		}
		for(k=1;k<=i;k++) //再印數字 
		{
		printf("%d",k);	
		}
		printf("\n");
	} 
	printf("\n-------------\n");
	//7.33 輸入一正整數，找出小於它的最大質數
	int max=0;
	printf("\n請輸入一數字: ");
	scanf("%d",&n);
	for(i=2;i<n;i++) //符合範圍的數 
	{
		for(j=2;j<i;j++) //判斷是否為質數 
		{
			if(i%j==0)
			break;
		}
		if(j==i) //正常跑完迴圈的質數 
		max=i; 
	}
	printf("小於n的最大質數為: %d\n",max);
	printf("-------------\n");
	//7.34 一群兔子%3==1 %5==3 %7==2 兔子有幾隻
	int num=1;
	while(1)
	{
		if(num%5!=3)
		{
			num+=3;
			continue;	
		}	
		else if(num%7!=2)
		{
			num+=3;
			continue;
		}
		else
		break;
	} 
	printf("\n最少有 %d 隻兔子\n\n",num);
	printf("-----------------\n");
	return 0;
}
