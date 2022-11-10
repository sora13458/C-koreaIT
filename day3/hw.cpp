#include<stdio.h>

void main() {

	//숙제: 대소문자를 판별하여 이프문을 출력해라

	char input;
	char answer;

RE : 

	printf("알파벳 한글자를 입력해 주세요 : ");
	scanf("%c" , &input); getchar();

	if(input >= 'A' && input <= 'Z')
		printf("%c는 대문자이고 아스키코드는 %d입니다\n", input ,input);

	else if(input >= 'a' && input <= 'z')
		printf("%c는 소문자이고 아스키코드는 %d입니다\n", input, input);

	else
		{printf("다시 입력해주세요\n");
		goto RE;
	}

	printf("\n");
	printf("계속하시겠습니까? ==> (Y/N)");
	printf("\n");

	answer = getchar();
	getchar();

	if(answer == 'Y' || answer == 'y')
		goto RE;
	else
		return;

}

