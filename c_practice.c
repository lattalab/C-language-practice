#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi acos(-1)
int main()
{
	//5.11 攝氏->華氏
	//tip:華氏溫度=(9/5)*攝氏溫度+32 
	double celsius,Fahrenheit; 
	printf("請輸入攝氏溫度(0~100):");
	scanf("%lf",&celsius);
	Fahrenheit=1.8*celsius+32;
	printf("經轉換後，華氏溫度為:%.2lf\n",Fahrenheit);
	printf("--------------------\n");
	//5.12 華氏轉攝氏
	//本應宣告華氏跟攝氏變數 但偷懶沿用上一題
	printf("\n請輸入華氏溫度(32~212):");
	scanf("%lf",&Fahrenheit);
	celsius=(Fahrenheit-32)*5/9;
	printf("經轉換後，攝氏溫度為:%.2lf\n",celsius);
	printf("--------------------\n");
	//5.13 英哩->公里
	//tip:1 mile=1.6kilometers
	double mile,kilometer;
	printf("\n請輸入英哩: "); 
	scanf("%lf",&mile);
	printf("經轉換後，為%.2lf公里\n",mile*1.6);
	printf("------------------------\n");
	//5.14 公里->英哩
	printf("\n請輸入公里: "); 
	scanf("%lf",&kilometer);
	mile=kilometer*5/8;
	printf("經轉換後，為%.2lf英哩\n",mile);
	printf("------------------------\n"); 
	//5.15 輸入平行四邊形的底跟高 算面積
	double a,b;
	printf("\n請輸入平行四邊形的底跟高: ");
	scanf("%lf %lf",&a,&b);
	printf("平行四邊形的面積為: %.2lf\n",a*b);
	printf("-------------------\n");
	//5.16 輸入圓球半徑 算圓球體積
	double r;
	printf("\n請輸入圓球半徑: ");
	scanf("%lf",&r);
	printf("圓球體積為:%lf\n",(4*pi*r*r*r)/3);
	printf("---------------------\n");
	return 0;
}
