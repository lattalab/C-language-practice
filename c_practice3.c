#include <stdio.h>
#include <math.h>
int main()
{
	//7.3 1~n���Ҧ��_�ƩM
	int n,i,sum=0;
	printf("�п�J�@�Ʀr: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;	
	} 
	printf("1~n���Ҧ��_�ƩM��: %d\n",sum);
	printf("-------------------------\n");
	//7.5 �D1~100���A�P�ɳQ3��8�㰣���Ҧ���ƪ��`�M
	int sumi=0;
	for(i=1;i<=100;i++)
	{
		if(i%3==0&&i%8==0)
		{
			sumi+=i;
		}
	} 
	printf("\n1~100���A�P�ɳQ3��8�㰣���Ҧ���ƪ��`�M��: %d\n",sumi);
	printf("-----------------\n");
	//7.6 ��]��
	printf("\n�п�J�@�Ʀr: ");
	scanf("%d",&n);
	printf("%d���Ҧ��]�Ƭ�: ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d ",i);
	}
	printf("\n----------------\n");
	//7.9 �p��1^2 - 2^2 + 3^2 -4^2.......+49^2-50^2
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
	printf("\n1^2 - 2^2 + 3^2 -4^2.......+49^2-50^2 ���Ȭ�: %d\n",square_sum);
	printf("-------------------\n");
	//7.10 1+1/2+1/3+....+1/n���`�M 
	double sumx=0;
	printf("\n�п�J�@�Ʀr: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sumx+=(1.0/i);
	}
	printf("1~n���˼ƩM��: %.2lf\n",sumx);
	printf("-------------------\n");
	//7.14 �@��÷�l3000m �C�Ѱťh�@�b���� �n��X�Ѥ~�|�u��5m
	double rope=3000,day=0;
	while(rope>5)
	{
		rope/=2;
		day++;	
	} 
	printf("\n3000m��÷�l�`�@�ݪ�O %.2lf�Ѥ~�ܦ��p��5m��\n",day);
	printf("--------------\n");
	//7.19 1+��n>=1000���̤pn��
	int suma=0,j=1;
	do
	{
		suma+=j;	
		j++;
	} 
	while(suma<1000);
	printf("\n���1�[��n���̤pn�Ȭ�: %d\n",j-1);
	printf("-------------------\n\n");
	//7.27 �L�X�ϧ�
	int k;
	for(i=1;i<=5;i++) //��� 
	{
		for(j=4-(i-1);j>0;j--) //���L�ť� 
		{
			printf(" ");
		}
		for(k=1;k<=i;k++) //�A�L�Ʀr 
		{
		printf("%d",k);	
		}
		printf("\n");
	} 
	printf("\n-------------\n");
	//7.33 ��J�@����ơA��X�p�󥦪��̤j���
	int max=0;
	printf("\n�п�J�@�Ʀr: ");
	scanf("%d",&n);
	for(i=2;i<n;i++) //�ŦX�d�򪺼� 
	{
		for(j=2;j<i;j++) //�P�_�O�_����� 
		{
			if(i%j==0)
			break;
		}
		if(j==i) //���`�]���j�骺��� 
		max=i; 
	}
	printf("�p��n���̤j��Ƭ�: %d\n",max);
	printf("-------------\n");
	//7.34 �@�s�ߤl%3==1 %5==3 %7==2 �ߤl���X��
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
	printf("\n�̤֦� %d ���ߤl\n\n",num);
	printf("-----------------\n");
	return 0;
}
