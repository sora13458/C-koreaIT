#include<stdio.h>

void main(){

	//문제: 홀수 짝수의 합을 구하여라

	int a, odd = 0, even = 0;

	for(a=1; a<=100; a++)
	{
		if(a%2 == 0)
			even += a ;
		else
			odd += a ;
	
	}
		
	
	printf("1~100 까지 짝수의 합 : %d\n",even);
	printf("1~100 까지 홀수의 합 : %d\n",odd);

}
