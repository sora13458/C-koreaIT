#include<stdio.h>

void main(){

	//���Ʒ� ���� ��� ��µ�
	//1��: �������� 1or 0�� ���//2��: �������� 1or 0�� ���

	int a;
	

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &a);
	
	int	a2 = a%2;

	switch(a2)
	{
		case 0 : printf("%d �� ¦���Դϴ�\n" , a2); break;

		case 1 : printf("%d �� Ȧ���Դϴ�\n" , a2);

	}


	//2��: �������� 1or 0�� ���//2��: �������� 1or 0�� ���
	int b;
	

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &b);

	switch(b%2)
	{
		case 0 : printf("%d �� ¦���Դϴ�\n" , b); break;

		case 1 : printf("%d �� Ȧ���Դϴ�\n" , b);

	}


	//3��: �������� 0�� �Ϳ� ���� ���� ���� �Ǻ�
	int c;
	

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &c);

	switch(c%2 == 0)
	{
		case 0 : printf("%d �� Ȧ���Դϴ�\n" , c); break;

		case 1 : printf("%d �� ¦���Դϴ�\n" , c);

	}


}