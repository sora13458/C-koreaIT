#include<stdio.h>

void main(){

	//����: Ȧ�� ¦���� ���� ���Ͽ���

	int a, odd = 0, even = 0;

	for(a=1; a<=100; a++)
	{
		if(a%2 == 0)
			even += a ;
		else
			odd += a ;
	
	}
		
	
	printf("1~100 ���� ¦���� �� : %d\n",even);
	printf("1~100 ���� Ȧ���� �� : %d\n",odd);

}
