#include<stdio.h>

void main()
{
	char name[10], blood;
	 int age;

	 printf("이  름 입력 : "); scanf("%s", name);
	 printf("나  이 입력 : "); scanf("%d", &age); getchar();
	 printf("혈액형 입력 : "); scanf("%c", &blood);

	 printf("내 이름은 %s이고 나이는 %d살이며 혈액형은 %c형입니다!\n", name, age, blood);

}
	