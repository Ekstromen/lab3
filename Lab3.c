#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define F 2.32166
#define G 2.7076
void plus()
{
	setlocale(LC_ALL, "rus");
	int num, num1;
	puts("������� 2 �����");
	scanf("%d", &num);
	scanf("%d", &num1);
	printf("����� = %d �������� = %d ������������ = %d ������� = %d ������� �� ������� = %d", num+num1, num-num1, num*num1, num/num1, num%num1);


}

void main()
{
	setlocale(LC_ALL, "rus");
	int dym;
	float result, result1, result2;
	puts("������� ���������� ������");
	scanf("%d",&dym);
	result = D * dym;
	result1 = F * dym;
	result2 = G * dym;
	printf("%d ������ � ��� %.1f �� ��� ��� %.1f �� � ���������� ����� ��� ��� %.1f  �� � ��������������� �����", dym, result, result1, result2);
}