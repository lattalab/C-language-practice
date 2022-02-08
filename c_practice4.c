#include <stdio.h>
#include <math.h>
#define f(x) 4*x*x+6*x-5
#define ABS(x) x>=0 ? (x):(-x)
#include "my_math.h"
int prime(int n);
float calculate_function(float n);
int Mersenne_prime(int n);
double myfun(int n);
double my_fun(double x,int n);
int fac(int n) //階層 
{
	int i,mul=1;
	for(i=1;i<=n;i++)
	mul*=i;
	return mul;
}
int rsum(int n);
int function(int n);
//8.25
void counter()
{
	static int i=1;
	printf("counter已被呼叫 %d 次了\n",i++);
}
int fib(int n)
{
	counter();
	if(n==1||n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	//8.7找出第100個質數 
	printf("第100個質數為: %d\n",prime(100));
	printf("-----------------------\n");
	//8.8 f(x)=3x^3+2x-1 找函數值
	printf("f(-3.2) = %f，f(-2.1) = %f，f(0) = %f，f(2.1) = %f\n",calculate_function(-3.2),calculate_function(-2.1),calculate_function(0),calculate_function(2.1));
	printf("-----------------------\n");
	//8.10 檢驗梅森尼質數(前四個就好)
	int arr[4],i=0,num,j=1;
	while(i<4)
	{
		num=prime(j++);
		if((Mersenne_prime(num))==1)
		{
		arr[i++]=num;	
		}
	} 
	printf("\n前四個梅尼森質數為: ");
	for(j=0;j<4;j++)
	printf("%d ",arr[j]);
	printf("\n--------------\n");
	//8.12 等比級數
	printf("\nmyfun(3) = %.2lf\n",myfun(3));
	printf("myfun(4) = %.2lf\n",myfun(4));
	printf("myfun(5) = %.2lf\n",myfun(5));
	printf("myfun(6) = %.2lf\n",myfun(6));
	num=1;
	while(myfun(num)!=1)
	num++;
	printf("n接近%d時，myfun會趨近一個定值(= 1)\n",num);
	num=1;
	while(myfun(num)<0.99999)
	num++;
	printf("n最小要是 %d ，myfun才會大於0.99999\n",num);
	printf("----------------\n");
	//8.14
	printf("\nmy_fun(0.1,5) = %.10lf\n",my_fun(0.1,5));
	printf("my_fun(0.1,8) = %.10lf\n",my_fun(0.1,8));
	printf("my_fun(0.2,8) = %.10lf\n",my_fun(0.2,8));
	num=2;
	while((my_fun(0.1,num)-my_fun(0.1,num-1)) > 0.00001)
	num++;
	
	printf("n最小要是 %d，my_fun(0.1,n-1)跟my_fun(0.1,n)的差值才會小於0.00001\n",num);
	printf("-------------------\n");
	//8.22 rsum=1X2+2X3+3X4+.......
	printf("\n請輸入一正整數: ");
	scanf("%d",&num);
	printf("rsum(%d)的值為: %d\n",num,rsum(num));
	printf("-----------------\n");
	//8.23 f(n)=2f(n-1)-5 ，f(0)=3
	printf("f(5) = %d\n",function(5));
	printf("--------------\n");
	//8.25
	fib(5); //代表fib有被呼叫這麼多次
	printf("--------------------\n");
	//8.31 
	printf("f(1.0) = %lf\n",f(1.0));
	printf("f(2.2) = %lf\n",f(2.2));
	printf("f(3.14) = %lf\n",f(3.14));
	printf("------------------\n");
	//8.34
	printf("ABS(-13.6) = %lf \n",ABS(-13.6));
	printf("------------------\n");
	//8.35+8.36
	printf("\n半徑1.0的圓面積: %lf\n",circle(1.0));
	printf("\n長5.0，寬4.6的長方形面積: %lf\n",rectangle(5.0,4.6));
	printf("\n底12.2，高9.4的三角形面積: %lf\n",triangle(12.2,9.4));
	printf("\n7的平方值:%d，三次方值:%d \n",SQUARE(7),CUBIC(7));
	printf("\n8跟7的平均值:%lf，乘積:%lf \n",AVERAGE(8.0,7.0),PRODUCT(8.0,7.0));
	printf("-----------------------\n");
	return 0;
}
////////////////////////
int prime(int n) //8.7
{
	//2是第一個質數 
	if(n==1)
	return 2;
	int count=1,num=2,i;
	while(count!=n)
	{
		num++;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			break;
		}
		if(i==num)
		count++;
	}
	return num;
}
float calculate_function(float n) //8.8
{
	float a,b,c;
	a=3*pow(n,3);
	b=2*n;
	c=-1;
	return (a+b+c);
}
int Mersenne_prime(int n) //8.10
{
	int i=1,temp=2;
	while(pow(2,i)<n)
	{
		i++;
		temp=pow(2,i);
	}
	temp=temp-1;
	
	if(temp==n)
	return 1;	
	else
	return 0;
}
double myfun(int n) //8.12
{
	int i;
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=1.0/pow(2,i);
	}
	return sum;
}
double my_fun(double x,int n) //8.14 
{
	double sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		double up=pow(x,i),down=fac(i);
		double final=up/down;
		sum+=final;
	}
	return sum;
}
int rsum(int n) //8.22
{
	if(n==1)
	return 0;
	else
	return (n-1)*n+rsum(n-1);
}
int function(int n) //8.23
{
	if(n==0)
	return 3;
	else
	return 2*function(n-1)-5; 
}
