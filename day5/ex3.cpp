#include<stdio.h>

void main(){

	//Q_1-100���� �� 7�� ����� �հ� ������ ���Ͽ���



	//=================<for��>=================
	int i=1, sum=0, count=0;

	for(i=1; i<=100; i++){
		if(i%7 == 0){
			sum += i;
			count++;
		}
		

	}
	printf("7����� �� : %d\n",sum);
	printf("7����� ���� : %d\n",count);


	
	//=================<while��>=================
	while(i<=100){
		if(i%7 == 0){
			sum += i;
			count++;
		}
		i++;
	}
	printf("7����� �� : %d\n",sum);
	printf("7����� ���� : %d\n",count);



	//=================<do-while��>=================
	do{
	if(i%7 == 0){
			sum += i;
			count++;
		}
		i++;
	}while(i<=100);
		
	
	printf("7����� �� : %d\n",sum);
	printf("7����� ���� : %d\n",count);



}
