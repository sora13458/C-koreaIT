





#include<stdio.h>

void main()
{
   char name[10], blood, ch;
   int age;

RE:

   printf("이름 입력 : "); scanf("%s", name);
   printf("나이 입력 : "); scanf("%d", &age); getchar();
   printf("혈액형 입력: "); scanf("%c", &blood); getchar();

   printf("내 이름 %s이고  나이는 %d살이며 혈액형은 %c형입니다!\n", name, age, blood);
   
   printf("계속하시겠습니까?(Y/N) -> ");

   ch = getchar();

   if(ch == 'Y' || ch == 'y')
	   goto RE;
   else
	   return;
	   
}