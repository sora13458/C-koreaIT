#include<stdio.h>

void main()
{
	char name[10], blood;
	 int age;

	 printf("��  �� �Է� : "); scanf("%s", name);
	 printf("��  �� �Է� : "); scanf("%d", &age); getchar();
	 printf("������ �Է� : "); scanf("%c", &blood);

	 printf("�� �̸��� %s�̰� ���̴� %d���̸� �������� %c���Դϴ�!\n", name, age, blood);

}
	