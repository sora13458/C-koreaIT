#include<stdio.h>

void main(){

/*	int i, sum1=0;

	for(i=1; i<=100; i++)
		sum1 = sum1 + i;

	printf("1-100까지의 합 : %d\n",sum1);
	

	int j = 1, sum2 = 0;

	while(j <= 100){
		sum2 = sum2 + j;
		j++;
	}
	printf("1-100까지의 합 : %d\n",sum2);

	int k = 1, sum3 = 0;

	do{
		sum3 = sum3 + k;
		k++;
	}while(k<=100);
	
	printf("1-100까지의 합 : %d\n",sum3);
*/	




	//반복문 세가지를 사용하여 1-100까지의 홀수 짝수 합을 각각 구해라

	// ==========< 1.for문 >============
	int i, sum1=0, sum2=0;

	for(i=1; i<=100; i++)
		if(i%2 == 0)
			sum1 += i;
		else
			 sum2 += i;

	printf("1 ~ 100까지 중 짝수합 : %d\n", sum1);
	printf("1 ~ 100까지 중 홀수합 : %d\n", sum2);



	//==========< 2. while 문 >============
	int j=0, sum11=0, sum22=0;

	while(j<=100)
	{
		if(j%2 == 0)
			sum11 = sum11 + j;
		else
			sum22 = sum22 +j;

		j++;
	}
	printf("1 ~ 100까지 중 짝수합 : %d\n", sum11);
	printf("1 ~ 100까지 중 홀수합 : %d\n", sum22);


	//==========< 3. do- while 문 >============
	int k=1, sum111=0, sum222=0;

	do{
		if(k%2 == 0)
			sum111 = sum111 + k;
		else
			sum222 = sum222 + k;
		k++;
	}while(k<=100);

	printf("1 ~ 100까지 중 짝수합 : %d\n", sum111);
	printf("1 ~ 100까지 중 홀수합 : %d\n", sum222);



}