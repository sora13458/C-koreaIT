





#include<stdio.h>

void main()
{
   char name[10], blood, ch;
   int age;

RE:

   printf("�̸� �Է� : "); scanf("%s", name);
   printf("���� �Է� : "); scanf("%d", &age); getchar();
   printf("������ �Է�: "); scanf("%c", &blood); getchar();

   printf("�� �̸� %s�̰�  ���̴� %d���̸� �������� %c���Դϴ�!\n", name, age, blood);
   
   printf("����Ͻðڽ��ϱ�?(Y/N) -> ");

   ch = getchar();

   if(ch == 'Y' || ch == 'y')
	   goto RE;
   else
	   return;
	   
}