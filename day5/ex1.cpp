#include<stdio.h>

void main(){

/*	int i, sum1=0;

	for(i=1; i<=100; i++)
		sum1 = sum1 + i;

	printf("1-100������ �� : %d\n",sum1);
	

	int j = 1, sum2 = 0;

	while(j <= 100){
		sum2 = sum2 + j;
		j++;
	}
	printf("1-100������ �� : %d\n",sum2);

	int k = 1, sum3 = 0;

	do{
		sum3 = sum3 + k;
		k++;
	}while(k<=100);
	
	printf("1-100������ �� : %d\n",sum3);
*/	




	//�ݺ��� �������� ����Ͽ� 1-100������ Ȧ�� ¦�� ���� ���� ���ض�

	// ==========< 1.for�� >============
	int i, sum1=0, sum2=0;

	for(i=1; i<=100; i++)
		if(i%2 == 0)
			sum1 += i;
		else
			 sum2 += i;

	printf("1 ~ 100���� �� ¦���� : %d\n", sum1);
	printf("1 ~ 100���� �� Ȧ���� : %d\n", sum2);



	//==========< 2. while �� >============
	int j=0, sum11=0, sum22=0;

	while(j<=100)
	{
		if(j%2 == 0)
			sum11 = sum11 + j;
		else
			sum22 = sum22 +j;

		j++;
	}
	printf("1 ~ 100���� �� ¦���� : %d\n", sum11);
	printf("1 ~ 100���� �� Ȧ���� : %d\n", sum22);


	//==========< 3. do- while �� >============
	int k=1, sum111=0, sum222=0;

	do{
		if(k%2 == 0)
			sum111 = sum111 + k;
		else
			sum222 = sum222 + k;
		k++;
	}while(k<=100);

	printf("1 ~ 100���� �� ¦���� : %d\n", sum111);
	printf("1 ~ 100���� �� Ȧ���� : %d\n", sum222);



}