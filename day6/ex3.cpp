#include<stdio.h>

void main(){

	//while ������ 1-25 ���� ���ڸ� ���簢��������� ����� ���ƶ�


	int i=1;

	while(i<=25){
		printf("%3d",i);
		if(i%5 == 0){
			printf("\n");
		}		
		i++;
	}




	//2�� while ������ 1-25 ���� ���ڸ� ���簢��������� ����� ���ƶ�

	int a=1,b,c=1;

	while(a<=5){
		
		b=1;
		while(b<=5){	
			b++;
			printf("%3d",c++);
		}		
		a++;
		printf("\n");
	}


	//do-while ������ 1-25 ���� ���ڸ� ���簢��������� ����� ���ƶ�


	int j=1;
	do
	{
		printf("%3d",j);
		if(j%5 == 0){
			printf("\n");
		}		
		j++;
		
	}
	while(j<=25);




	//2�� do- while ������ 1-25 ���� ���ڸ� ���簢��������� ����� ���ƶ�

	int d=1,e,f=1;

	do{
		
		e=1;
		do{	
			e++;
			printf("%3d",f++);
		}while(e<=5);	
		d++;
		printf("\n");
	}while(d<=5);


}