#include <stdio.h>
#include <locale.h>

void name()
{
	int k = 2;
	setlocale(LC_ALL, "RUS");
	printf("Моя\n\t%d\n\t\tпрограмма", k);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Результат умножения %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%s%g разделить %.2e равно %.2f\n ", "++++", 5., 2., 5. / 2);
}

void time()
{
	setlocale(LC_ALL, "RUS");
	int N = 15;
	int K = 43;
	printf("Сейчас %d часов %d минут 00 секунд", N, K);
	printf("\nИдет %d минута суток", (N * 60) + K);
	printf("\nДо полуночи осталось %d часов и %d минут ", 23 - N, 60 - K);
	printf("\nС 8.00 прошло %d секунд", (N - 8) * 60 * 60 + K * 60);
	printf("\nТекущий час = %.2f суток  и текущая минута = %.2f часа", N / 24., K / 60.);

}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	float n = 2;
	float h = 333;
	printf("Дано:\n\t%4.0f \n\t %.0f",n,h);
	printf("\n        _________");
	printf("\nОтвет: ");
	printf("            \n\t%0+12.7F", n/h);

}