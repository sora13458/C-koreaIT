#include<stdio.h>

void main()
{
	char name[10];
	char phonenum[100];
	char tel[50];


	printf("�̸��� �Է��� �ּ��� : ");
	gets(name);

	printf("��ȭ��ȣ�� �Է��� �ּ��� : ");
	gets(phonenum);

	printf("��Ż縦 �Է��� �ּ��� : ");
	gets(tel);

	printf("\n");
	puts("���� ������ ������ �����ϴ�");

	puts("�̸� : ");
	puts(name);
	puts("��ȭ��ȣ : ");
	puts(phonenum);
	puts("��Ż� : ");
	puts(tel);

}