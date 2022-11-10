#include<stdio.h>

void main(){

	//Q_1-100까지 중 7의 배수의 합과 갯수를 구하여라



	//=================<for문>=================
	int i=1, sum=0, count=0;

	for(i=1; i<=100; i++){
		if(i%7 == 0){
			sum += i;
			count++;
		}
		

	}
	printf("7배수의 합 : %d\n",sum);
	printf("7배수의 개수 : %d\n",count);


	
	//=================<while문>=================
	while(i<=100){
		if(i%7 == 0){
			sum += i;
			count++;
		}
		i++;
	}
	printf("7배수의 합 : %d\n",sum);
	printf("7배수의 개수 : %d\n",count);



	//=================<do-while문>=================
	do{
	if(i%7 == 0){
			sum += i;
			count++;
		}
		i++;
	}while(i<=100);
		
	
	printf("7배수의 합 : %d\n",sum);
	printf("7배수의 개수 : %d\n",count);



}
