#include <stdio.h>
#include <locale.h>

void name()
{
	int k = 2;
	setlocale(LC_ALL, "RUS");
	printf("���\n\t%d\n\t\t���������", k);
	printf("%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("��������� ��������� %d �� %d ����� %d\n ", 2000, 4, 2000 * 4);
	printf("%s%g ��������� %.2e ����� %.2f\n ", "++++", 5., 2., 5. / 2);
}

void time()
{
	setlocale(LC_ALL, "RUS");
	int N = 15;
	int K = 43;
	printf("������ %d ����� %d ����� 00 ������", N, K);
	printf("\n���� %d ������ �����", (N * 60) + K);
	printf("\n�� �������� �������� %d ����� � %d ����� ", 23 - N, 60 - K);
	printf("\n� 8.00 ������ %d ������", (N - 8) * 60 * 60 + K * 60);
	printf("\n������� ��� = %.2f �����  � ������� ������ = %.2f ����", N / 24., K / 60.);

}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	float n = 2;
	float h = 333;
	printf("����:\n\t%4.0f \n\t %.0f",n,h);
	printf("\n        _________");
	printf("\n�����: ");
	printf("            \n\t%0+12.7F", n/h);

}