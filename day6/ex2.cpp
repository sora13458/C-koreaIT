#include<stdio.h>

void main(){
	

	//단일 포문을 사용하여 1-25까지 숫자로 정사각형을 만들어라

	int i;

	for(i=1;i<=25; i++){
		printf("%3d",i);
		if(i%5 == 0)
			printf("\n");
	}


	//2중 포문을 사용하여 1-25까지 숫자로 정사각형을 만들어라
	int a,b,c=1;

	for(a=1;a<=5; a++){
		for(b=1;b<=5; b++){
			printf("%3d",c++);
		}
		printf("\n");
	}







}