#include<stdio.h>

void main(){

	int a[10];
	int b[2][5];
	int i,m,n;

	printf("1차 배열 정수 입출력\n");

	for(i=0; i<10; i++){
		printf("%d 번째 정수를 입력하세요 : ", i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++){
		printf("%d 번째 정수는 : %d\n", i+1,a[i]);
	}
	
	
	printf("\n");
	printf("2차 배열정수 입출력\n");
	printf("\n");


	for(n=0; n<2; n++){
		for(m=0; m<5; m++){
			printf("[%d][%d] 칸의 정수를 입력하세요 : ", n,m);
			scanf("%d",&b[n][m]);
		}
	}
	for(n=0; n<2; n++){
		for(m=0; m<5; m++){
			printf("[%d][%d] 칸의 정수 : %d\n", n,m, b[n][m]);
		}
		printf("\n");
	}




}