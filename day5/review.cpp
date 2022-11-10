#include<stdio.h>

void main(){

		//내 풀이
	int input;
	int i;
	int mul=0;

	printf("한 정수를 입력해 주세요 : ");
	scanf("%d",&input); getchar();

	for(i=1; i<=9; i++){
		mul = input * i;
		printf("%3d * %d = %-2d", input, i, mul);

	}
	printf("\n");


		//쌤 풀이
	int input;
	int i;

	printf("한 정수를 입력해 주세요 : ");
	scanf("%d",&input); getchar();

	for(i=1; i<=9; i++){
		printf("%3d * %d = %-2d", input, i, input * i);

	}
	printf("\n");


}