#include<stdio.h>
#include<conio.h> //getch();

void main()
{
   char name[10], blood, ch;
   int age;

RE:

   printf("�̸� �Է� : "); scanf("%s", name);
   printf("���� �Է� : "); scanf("%d", &age); getchar();
   printf("������ �Է�: "); scanf("%c", &blood); getchar();
                                 //blood = getchar(); getchar(); 

   printf("�� �̸� %s�̰�  ���̴� %d���̸� �������� %c���Դϴ�!\n", name, age, blood);
   
   printf("����Ͻðڽ��ϱ�?(Y/N) -> ");

   ch = getchar();
   //scanf("%c", &ch);

   if(ch == 'Y' || ch == 'y')
	   goto RE;
   else
	   return;
   











}