#include <stdio.h>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("\nВведите второе число: ");
	scanf_s("%d", &b);
	c = a + b;
	printf("\nРезультат = %d", c);
}