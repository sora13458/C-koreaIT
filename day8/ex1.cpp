#include<stdio.h>

void main(){

	int arr[10], m, n, x;

	printf("<10���� ������ �Է��ϼ���>\n");
	for(m=0; m<10; m++){
		printf("%d������ : ",m+1);
		scanf("%d",&arr[m]);	
	}

	for(m=0; m<9; m++){
		for(n=m+1; n<10; n++){
			if(arr[m] < arr[n]){
				x = arr[m];
				arr[m]= arr[n];
				arr[n] = x;
			}
		}	
	}
	printf("\n");
	printf("<�������� ����>\n");
	for(m=0; m<10; m++){
		printf("%d\n", arr[m]);
	}
	 



}