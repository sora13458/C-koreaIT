#include<stdio.h>

void main() {

	int a;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d",&a);
	printf("a�� ������ : %d\n", a);

	if(a<0)
		a = -a;
	
	printf("���밪�� : %d\n",a);
}