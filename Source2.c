#include <locale.h>
#include <stdio.h>
#define D 2.54
#define F 2.32166
int dym;
float result;
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ���������� ������:");
	scanf_s("%d", &dym);
	result = D * dym;
	//��� ���������� ���������� �������� F
	printf("%d ������ - ��� %.1f ��", dym, result);
}