#include<stdio.h>

void main(){
	

	//���� ������ ����Ͽ� 1-25���� ���ڷ� ���簢���� ������

	int i;

	for(i=1;i<=25; i++){
		printf("%3d",i);
		if(i%5 == 0)
			printf("\n");
	}


	//2�� ������ ����Ͽ� 1-25���� ���ڷ� ���簢���� ������
	int a,b,c=1;

	for(a=1;a<=5; a++){
		for(b=1;b<=5; b++){
			printf("%3d",c++);
		}
		printf("\n");
	}







}