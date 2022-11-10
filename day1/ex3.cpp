#include<stdio.h>

void main()
{
	char name[10];
	char phonenum[100];
	char tel[50];


	printf("이름을 입력해 주세요 : ");
	gets(name);

	printf("전화번호를 입력해 주세요 : ");
	gets(phonenum);

	printf("통신사를 입력해 주세요 : ");
	gets(tel);

	printf("\n");
	puts("가입 정보는 다음과 같습니다");

	puts("이름 : ");
	puts(name);
	puts("전화번호 : ");
	puts(phonenum);
	puts("통신사 : ");
	puts(tel);

}