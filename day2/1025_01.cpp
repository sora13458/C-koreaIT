#include<stdio.h>

void main() {

	int num1;
	int num2;
	char answer;

RE: 

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &num1); 

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &num2); getchar();	

	//1�� �ڵ�
	//������ �ι� ���� �ڵ��̴� (���������ϰ� 0���� ��)
	if(num1%2 == 0)
		printf("%d�� ¦���Դϴ�\n", num1);
	else 
		printf("%d�� Ȧ���Դϴ�\n", num1);

	//2�� �ڵ�
	//������ �ѹ��� ���� 1���ڵ庸�� ���� �� ȿ�����̴�
	if(num2%2) //C���� 0�� �������� �ν��ϱ� ������ �� ���� else �� ��µȴ�.
		printf("%d�� Ȧ���Դϴ�\n", num2);
	else 
		printf("%d�� ¦���Դϴ�\n", num2);




	printf("����Ͻ÷��� Y �����Ͻ÷��� �ƹ� Ű�� �����ּ���");
	answer = getchar();	

	if(answer == 'Y' || answer == 'y')
		goto RE;
	else
		return;
	
}