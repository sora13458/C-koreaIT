#include<stdio.h>
#include<conio.h>

void main(){

 //1-100������ ���� ���������� ���ض�

	int i,a;
	int sum = 0;

	for(i=1;i<=100; i++)
	{
		if(i%10 == 0)
		{
			puts("========================");
		}
	sum += i;
	printf("%d ȸ�� ���� : %d\n",i, sum);
	}


}   