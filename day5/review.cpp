#include<stdio.h>

void main(){

		//�� Ǯ��
	int input;
	int i;
	int mul=0;

	printf("�� ������ �Է��� �ּ��� : ");
	scanf("%d",&input); getchar();

	for(i=1; i<=9; i++){
		mul = input * i;
		printf("%3d * %d = %-2d", input, i, mul);

	}
	printf("\n");


		//�� Ǯ��
	int input;
	int i;

	printf("�� ������ �Է��� �ּ��� : ");
	scanf("%d",&input); getchar();

	for(i=1; i<=9; i++){
		printf("%3d * %d = %-2d", input, i, input * i);

	}
	printf("\n");


}