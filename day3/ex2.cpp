#include<stdio.h>

void main(){

	//switch문으로 계절찾기 

	int a;
	
	printf("계절을 선택하세요\n");
	printf("1: 봄\n");
	printf("2: 여름\n");
	printf("3: 가을\n");
	printf("4: 겨울\n");
	scanf("%d", &a);

	switch(a)
	{
		case 1 :puts("1번은 봄"); break;
		case 2 :puts("2번은 여름"); break;
		case 3 :puts("3번은 가을"); break;
		case 4 :puts("4번은 겨울");
		default : puts("다시 입력해주세요");

	}


}
