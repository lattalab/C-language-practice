#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi acos(-1)
int main()
{
	//5.11 ���->�ؤ�
	//tip:�ؤ�ū�=(9/5)*���ū�+32 
	double celsius,Fahrenheit; 
	printf("�п�J���ū�(0~100):");
	scanf("%lf",&celsius);
	Fahrenheit=1.8*celsius+32;
	printf("�g�ഫ��A�ؤ�ū׬�:%.2lf\n",Fahrenheit);
	printf("--------------------\n");
	//5.12 �ؤ������
	//�����ŧi�ؤ������ܼ� �����i�u�ΤW�@�D
	printf("\n�п�J�ؤ�ū�(32~212):");
	scanf("%lf",&Fahrenheit);
	celsius=(Fahrenheit-32)*5/9;
	printf("�g�ഫ��A���ū׬�:%.2lf\n",celsius);
	printf("--------------------\n");
	//5.13 �^��->����
	//tip:1 mile=1.6kilometers
	double mile,kilometer;
	printf("\n�п�J�^��: "); 
	scanf("%lf",&mile);
	printf("�g�ഫ��A��%.2lf����\n",mile*1.6);
	printf("------------------------\n");
	//5.14 ����->�^��
	printf("\n�п�J����: "); 
	scanf("%lf",&kilometer);
	mile=kilometer*5/8;
	printf("�g�ഫ��A��%.2lf�^��\n",mile);
	printf("------------------------\n"); 
	//5.15 ��J����|��Ϊ����� �⭱�n
	double a,b;
	printf("\n�п�J����|��Ϊ�����: ");
	scanf("%lf %lf",&a,&b);
	printf("����|��Ϊ����n��: %.2lf\n",a*b);
	printf("-------------------\n");
	//5.16 ��J��y�b�| ���y��n
	double r;
	printf("\n�п�J��y�b�|: ");
	scanf("%lf",&r);
	printf("��y��n��:%lf\n",(4*pi*r*r*r)/3);
	printf("---------------------\n");
	return 0;
}
