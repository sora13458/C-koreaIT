#include<stdio.h>

void main(){

	int a[10];
	int b[2][5];
	int i,m,n;

	printf("1�� �迭 ���� �����\n");

	for(i=0; i<10; i++){
		printf("%d ��° ������ �Է��ϼ��� : ", i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++){
		printf("%d ��° ������ : %d\n", i+1,a[i]);
	}
	
	
	printf("\n");
	printf("2�� �迭���� �����\n");
	printf("\n");


	for(n=0; n<2; n++){
		for(m=0; m<5; m++){
			printf("[%d][%d] ĭ�� ������ �Է��ϼ��� : ", n,m);
			scanf("%d",&b[n][m]);
		}
	}
	for(n=0; n<2; n++){
		for(m=0; m<5; m++){
			printf("[%d][%d] ĭ�� ���� : %d\n", n,m, b[n][m]);
		}
		printf("\n");
	}




}