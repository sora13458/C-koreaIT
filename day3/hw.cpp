#include<stdio.h>

void main() {

	//����: ��ҹ��ڸ� �Ǻ��Ͽ� �������� ����ض�

	char input;
	char answer;

RE : 

	printf("���ĺ� �ѱ��ڸ� �Է��� �ּ��� : ");
	scanf("%c" , &input); getchar();

	if(input >= 'A' && input <= 'Z')
		printf("%c�� �빮���̰� �ƽ�Ű�ڵ�� %d�Դϴ�\n", input ,input);

	else if(input >= 'a' && input <= 'z')
		printf("%c�� �ҹ����̰� �ƽ�Ű�ڵ�� %d�Դϴ�\n", input, input);

	else
		{printf("�ٽ� �Է����ּ���\n");
		goto RE;
	}

	printf("\n");
	printf("����Ͻðڽ��ϱ�? ==> (Y/N)");
	printf("\n");

	answer = getchar();
	getchar();

	if(answer == 'Y' || answer == 'y')
		goto RE;
	else
		return;

}

