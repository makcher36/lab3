#include <stdio.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;
	puts("������� �����:");
	scanf_s("%d", &num1);
	printf("������� ������ ����� %d\n", num1);
	puts("������� �����:");
	scanf_s("%d", &num2);
	printf("������� ������ ����� %d\n", num2);
	printf("�����: %d\n", num1 + num2);
	printf("��������: %d\n", num1 - num2);
	printf("������������: %d\n", num1 * num2);
	printf("�������: %d\n", num1 / num2);
	printf("������� �� �������: %d\n", num1 % num2);

}