#include <stdio.h>

void main()
{
	int a, b, c, d, e, f;
	
	

	printf("�ð��� �ӱ� :");
	scanf_s("%d", &a);

	printf("�� �� �� �� : ");
	scanf_s("%d", &b);

	printf("�� �� �� �� : ");
	scanf_s("%d", &c);

	printf("��       �� : ");
	scanf_s("%d", &d);

	e = a*b*c;
	f = e/d;

	printf("==============================\n");
	
	printf("��       �� : %d", &e);
	printf("�� �� �� �� : %d", &f);
	
	printf("==============================\n");
}