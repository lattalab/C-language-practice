#include <stdio.h>
#include <math.h>
int main()
{
	//6.9 �P�_���Z�϶�
	int i,frequency_A=0,frequency_B=0,frequency_C=0;
	double score;
	for(i=1;i<=10;i++)
	{
		printf("�п�J��%d�Ӿǥͪ����Z: ",i);
		scanf("%lf",&score);
		if(score<60)
		{
		printf("���Z��C\n");
		frequency_A++;	
		}
		else if(score>=60&&score<=75)
		{
		printf("���Z��B\n");
		frequency_B++;	
		}
		else if(score>=76&&score<=100)
		{
		printf("���Z��A\n");
		frequency_C++;	
		}	
		printf("\n");
	}
	printf("�`�p�o��A���H��:%d\n",frequency_A);
	printf("�`�p�o��B���H��:%d\n",frequency_B);
	printf("�`�p�o��C���H��:%d\n",frequency_C);
	printf("-------------------------\n");
	//6.10 �P�_x,y�y�Цb�� 
	fflush(stdin);
	double x,y;
	printf("\n�п�J(x,y)�y��:" );
	scanf("(%lf,%lf)",&x,&y);
	if(x==0&&y==0)
	printf("�b���I�W\n");
	else if(x==0)
	printf("�bY�b�W\n");
	else if(y==0)
	printf("�bX�b�W\n");
	else if(x>0&&y>0)
	printf("�b�Ĥ@�H��\n");
	else if(x<0&&y>0)
	printf("�b�ĤG�H��\n");
	else if(x<0&&y<0)
	printf("�b�ĤT�H��\n");
	else
	printf("�b�ĥ|�H��\n");
	printf("------------------\n");
	//6.11 ���~��
	int hour;
	double salary;
	printf("\n�п�J�A���u�@�ɼ�: ");
	scanf("%d",&hour);
	if(hour<=60) //60hr�� �Chr��75�� 
	{
		salary=75*hour;
		printf("�A���Ӥ��~����: %.2lf\n",salary);
	}
	else if(hour>60&&hour<=75) //61~75 �Chr��75*1.25 
	{
		salary=75*60+(hour-60)*75*1.25;
		printf("�A���Ӥ��~����: %.2lf\n",salary);
	} 
	else //76hr�H�� �Chr��75*1.75
	{
		salary=75*60+75*1.25*15+75*1.75*(hour-75);
		printf("�A���Ӥ��~����: %.2lf\n",salary);	
	}
	printf("-----------------------\n");
	//6.16 ��@���G����{������
	float a,b,c;
	printf("\n�ж�J�@���G����{�����Y��(ax^2+bx+c): ");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c>0) 
	{
		printf("����ӹ�ڡAx1 = %.2f x2 = %.2f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else if(b*b-4*a*c==0)
	{
		printf("����Ӭ۵���ڡAx = %.2f\n",-b/(2*a));
	}
	else
	{
		float d=b*b-4*a*c;
		printf("�S�����! ���ڤ��O�� x1 = %.2fi x2 = %.2fi\n",(-b+sqrt(-d))/(2*a),(-b-sqrt(-d))/(2*a));
	}
	printf("---------------------\n");
	//6.22 a��A�L�XA,b��B�L�XB,��L�L�X���OA��B
	char ch;
	printf("\n�п�J�@�^��r��: ");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("�z��J���OA\n");
			break;
		case 'b':
		case 'B':
			printf("�z��J���OB\n");
			break;
		default:
			printf("�z��J�����OA��B\n");
			break;			
	}
	printf("---------------\n"); 
	return 0;
}
