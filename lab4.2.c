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
	printf("Введите символ");
	scanf("\n%c", &c);
	printf("Введите десятичное число");
	scanf("\n%d", &i);
	printf("Введите дробное число");
	scanf("\n%f", &f);
	printf("Введите число в виде xx.x e+xx");
	scanf("\n%e", &x);
	printf("%c %d %f %le", c, i, f, x);
}

void fun2()
	{
	setlocale(LC_ALL, "rus");
	int n;
	printf("Введите трехзначное число число\n");
	scanf("%d", &n);
	printf("Последняя цифра - %d, первая цифра - %d, сумма цифр - %d", n % 10, n / 100, n % 10 + n / 100 + ((n % 100) / 10));
	printf("\nПеревернутое число - %d", (n % 10 * 100) + (((n % 100) / 10) * 10) + (n / 100));
	}

void fun3()
{
	setlocale(LC_ALL, "rus");
	float x;
	printf("Введите угол в градусах:\n");
	scanf("%f", &x);
	x = (M_PI / 180) * x;
	printf("Значение Sin = %f", sin((float)x));
}

void main()
{
	setlocale(LC_ALL, "rus");
	float x,y;
	printf("Введите x");
	scanf("%f",&x);
	printf("y = ");

}