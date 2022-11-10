#include<stdio.h>

void main(){
/*
	int i, j;
	int mul;

	for(i=2; i<=9; i++)
	{
		for(j=1; j<=9; j++){
		mul = i * j;
		printf("%d * %d = %d  ", i, j, mul);
		}
	printf("\n");
	
	}		
*/	


	int a = 2,b=1;
	
	while(a<=9){
		
		while(b<=9){
			b++;
			
			
		}
		a++;
		printf("%d * %d = %d  ", a,b,a*b);
		printf("\n");
	}




















}