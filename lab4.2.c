#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define k 7
void fun()
{
	setlocale(LC_ALL, "rus");
	char c;
	int i;
	float f;
	double x;
	printf("������� ������");
	scanf("\n%c", &c);
	printf("������� ���������� �����");
	scanf("\n%d", &i);
	printf("������� ������� �����");
	scanf("\n%f", &f);
	printf("������� ����� � ���� xx.x e+xx");
	scanf("\n%e", &x);
	printf("%c %d %f %le", c, i, f, x);
}

void fun2()
	{
	setlocale(LC_ALL, "rus");
	int n;
	printf("������� ����������� ����� �����\n");
	scanf("%d", &n);
	printf("��������� ����� - %d, ������ ����� - %d, ����� ���� - %d", n % 10, n / 100, n % 10 + n / 100 + ((n % 100) / 10));
	printf("\n������������ ����� - %d", (n % 10 * 100) + (((n % 100) / 10) * 10) + (n / 100));
	}

void fun3()
{
	setlocale(LC_ALL, "rus");
	float x;
	printf("������� ���� � ��������:\n");
	scanf("%f", &x);
	x = (M_PI / 180) * x;
	printf("�������� Sin = %f", sin((float)x));
}

void main()
{
	setlocale(LC_ALL, "rus");
	float x,y;
	printf("������� x");
	scanf("%f",&x);
	printf("y = ");

}