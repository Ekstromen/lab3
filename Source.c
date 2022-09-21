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
	puts("ââåäèòå 2 ÷èñëà");
	scanf("%d", &num);
	scanf("%d", &num1);
	printf("Ñóììà = %d ðàçíîñòü = %d ïðîèçâåäåíèå = %d ÷àñòíîå = %d îñòàòîê îò äåëåíèÿ = %d", num + num1, num - num1, num * num1, num / num1, num % num1);


}

void res()
{
	setlocale(LC_ALL, "rus");
	int dym;
	float result, result1, result2;
	puts("Ââåäèòå êîëè÷åñòâî äþéìîâ");
	scanf("%d", &dym);
	result = D * dym;
	result1 = F * dym;
	result2 = G * dym;
	printf("%d äþéìîâ – ýòî %.1f ñì èëè ýòî %.1f ñì ñ èñïàíñêîãî äþéìà èëè ýòî %.1f  ñì ñ ñòàðîëèòîâñêîãî äþéìà", dym, result, result1, result2);
}
void main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	puts("Введите 2 числа:");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("_________________________________________________\n|\t a*b \t|\t a+b \t|\t a-b \t|\n_________________________________________________\n|\t %d*%d \t|\t %d+%d \t|\t %d-%d \t|\n_________________________________________________\n|\t  %d  \t|\t  %d  \t|\t  %d  \t|",a,b,a,b,a,b,a*b,a+b,a-b);
	
}
