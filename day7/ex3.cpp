#include<stdio.h>

void main(){

	//1���迭�� ����Ͽ� 1-25�� ���簢������ ����غ���
	int a[25],i;

	for(i=0;i<25; i++){
		a[i] = i+1;
		printf("%3d",a[i]);
		if(a[i]%5 == 0)
			printf("\n");
	}


	//2���迭�� ����Ͽ� 1-25�� ���簢������ ����غ���
	int b[5][5];
	int m,n, k=1;

	for(m=0; m<5; m++){
		for(n=0; n<5; n++){
			b[m][n] = k++; 
			printf("%3d",b[m][n]);
		}
		printf("\n");
	}



}