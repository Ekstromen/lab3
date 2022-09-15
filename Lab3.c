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
	puts("введите 2 числа");
	scanf("%d", &num);
	scanf("%d", &num1);
	printf("—умма = %d разность = %d произведение = %d частное = %d остаток от делени€ = %d", num+num1, num-num1, num*num1, num/num1, num%num1);


}

void main()
{
	setlocale(LC_ALL, "rus");
	int dym;
	float result, result1, result2;
	puts("¬ведите количество дюймов");
	scanf("%d",&dym);
	result = D * dym;
	result1 = F * dym;
	result2 = G * dym;
	printf("%d дюймов Ц это %.1f см или это %.1f см с испанского дюйма или это %.1f  см с старолитовского дюйма", dym, result, result1, result2);
}