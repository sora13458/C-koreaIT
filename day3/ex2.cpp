#include<stdio.h>

void main(){

	//switch������ ����ã�� 

	int a;
	
	printf("������ �����ϼ���\n");
	printf("1: ��\n");
	printf("2: ����\n");
	printf("3: ����\n");
	printf("4: �ܿ�\n");
	scanf("%d", &a);

	switch(a)
	{
		case 1 :puts("1���� ��"); break;
		case 2 :puts("2���� ����"); break;
		case 3 :puts("3���� ����"); break;
		case 4 :puts("4���� �ܿ�");
		default : puts("�ٽ� �Է����ּ���");

	}


}
