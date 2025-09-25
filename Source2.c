#include <locale.h>
#include <stdio.h>
#define D 2.54
#define F 2.32166
int dym;
float result;
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите количество дюймов:");
	scanf_s("%d", &dym);
	result = D * dym;
	//дл€ испанского необходимо добавить F
	printf("%d дюймов - это %.1f см", dym, result);
}