#include<stdio.h>

void main() 
{
	char name[10]; 
	int age;
	char bloodtype;
	char answer;

	RE;

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	
	//�Է¹޴� ��� �����ʹ� �Լ��� ������ ��
	//scanf�� \n�� �����ϰ� �ִµ� ����,�����̽�,���ʹ� ��� ���ڷ� �ν���
	
	getchar(); //����� �����̽� ���͸� �����ϰ� ���Ϲ��ڸ� �Է¹ޱ����� �Լ�

	printf("�������� �Է��ϼ��� : ");
	scanf("%c", &bloodtype);
	
	getchar();

	printf("�̸��� %s, ���̴� %d, �������� %c�Դϴ�\n", name, age, bloodtype);

	answer = getchar();
	
	printf("����Ͻðڽ��ϱ�?(Y/N) => ");

	if(answer == 'y' || answer == 'Y')
		goto RE;
	else
		return;



}