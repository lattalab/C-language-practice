#include <stdio.h>
#include <math.h>
int main()
{
	//6.9 判斷成績區間
	int i,frequency_A=0,frequency_B=0,frequency_C=0;
	double score;
	for(i=1;i<=10;i++)
	{
		printf("請輸入第%d個學生的成績: ",i);
		scanf("%lf",&score);
		if(score<60)
		{
		printf("成績為C\n");
		frequency_A++;	
		}
		else if(score>=60&&score<=75)
		{
		printf("成績為B\n");
		frequency_B++;	
		}
		else if(score>=76&&score<=100)
		{
		printf("成績為A\n");
		frequency_C++;	
		}	
		printf("\n");
	}
	printf("總計得到A的人有:%d\n",frequency_A);
	printf("總計得到B的人有:%d\n",frequency_B);
	printf("總計得到C的人有:%d\n",frequency_C);
	printf("-------------------------\n");
	//6.10 判斷x,y座標在哪 
	fflush(stdin);
	double x,y;
	printf("\n請輸入(x,y)座標:" );
	scanf("(%lf,%lf)",&x,&y);
	if(x==0&&y==0)
	printf("在原點上\n");
	else if(x==0)
	printf("在Y軸上\n");
	else if(y==0)
	printf("在X軸上\n");
	else if(x>0&&y>0)
	printf("在第一象限\n");
	else if(x<0&&y>0)
	printf("在第二象限\n");
	else if(x<0&&y<0)
	printf("在第三象限\n");
	else
	printf("在第四象限\n");
	printf("------------------\n");
	//6.11 算薪水
	int hour;
	double salary;
	printf("\n請輸入你的工作時數: ");
	scanf("%d",&hour);
	if(hour<=60) //60hr內 每hr為75元 
	{
		salary=75*hour;
		printf("你的該月薪水為: %.2lf\n",salary);
	}
	else if(hour>60&&hour<=75) //61~75 每hr為75*1.25 
	{
		salary=75*60+(hour-60)*75*1.25;
		printf("你的該月薪水為: %.2lf\n",salary);
	} 
	else //76hr以後 每hr為75*1.75
	{
		salary=75*60+75*1.25*15+75*1.75*(hour-75);
		printf("你的該月薪水為: %.2lf\n",salary);	
	}
	printf("-----------------------\n");
	//6.16 算一元二次方程式的根
	float a,b,c;
	printf("\n請填入一元二次方程式的係數(ax^2+bx+c): ");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c>0) 
	{
		printf("有兩個實根，x1 = %.2f x2 = %.2f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else if(b*b-4*a*c==0)
	{
		printf("有兩個相等實根，x = %.2f\n",-b/(2*a));
	}
	else
	{
		float d=b*b-4*a*c;
		printf("沒有實根! 兩虛根分別為 x1 = %.2fi x2 = %.2fi\n",(-b+sqrt(-d))/(2*a),(-b-sqrt(-d))/(2*a));
	}
	printf("---------------------\n");
	//6.22 a或A印出A,b或B印出B,其他印出不是A或B
	char ch;
	printf("\n請輸入一英文字母: ");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("您輸入的是A\n");
			break;
		case 'b':
		case 'B':
			printf("您輸入的是B\n");
			break;
		default:
			printf("您輸入的不是A或B\n");
			break;			
	}
	printf("---------------\n"); 
	return 0;
}
