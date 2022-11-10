#include<stdio.h>

void main()
{
	char name[10];
	 int age;

	 printf("이  름 입력 : "); scanf("%s", name);
	 printf("나  이 입력 : "); scanf("%d", &age);

	 printf("내 이름은 %s이고 나이는 %d살입니다!\n", name, age);

}
	