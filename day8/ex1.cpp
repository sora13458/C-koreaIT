#include<stdio.h>

void main(){

	int arr[10], m, n, x;

	printf("<10개의 정수를 입력하세요>\n");
	for(m=0; m<10; m++){
		printf("%d번정수 : ",m+1);
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
	printf("<내림차순 정렬>\n");
	for(m=0; m<10; m++){
		printf("%d\n", arr[m]);
	}
	 



}