#include<stdio.h>

void main() {

	int input;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &input);


	if(input > 0)
		printf("%d�� ���밪�� : %d\n",input,input);
	else if(input < 0)
		printf("%d�� ���밪�� : %d\n",input, -input);
	else
		printf("%d �� : %d" , input);
	

	//�� �ڵ�� ������ �ڵ�


	int i;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d", &i);
	printf("%d�� ���밪�� : ",i);


	if(input < 0){
		i = -i;
		printf("%d�� ���밪�� : %d\n",-i,i);
	}







}