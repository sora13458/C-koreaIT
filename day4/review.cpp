#include<stdio.h>

void main() {

	int a;

	printf("한 정수를 입력하세요 : ");
	scanf("%d",&a);
	printf("a의 절댓값은 : %d\n", a);

	if(a<0)
		a = -a;
	
	printf("절대값은 : %d\n",a);
}