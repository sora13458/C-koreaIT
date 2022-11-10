#include<stdio.h>

void main(){

	//puts("=====두수의 합을 배열로 나타내기=====\n");
	//int i, a[3];

	//printf("첫번째 정수를 입력하세요 : ");
	//scanf("%d",&a[0]);
	//printf("두번째 정수를 입력하세요 : ");
	//scanf("%d",&a[1]); 

	//a[2] = a[0] + a[1];

	//for(i=0; i<3; i++)
	//	printf("%3d",a[i]);

	//puts("\n");



	//puts("=====배열을 통해 세 정수를 입력받고 최대값 구하기=====\n");


	//int j, arr[3];
	//
	//puts("세 정수를 입력하세요 :");

	//for(j=0; j<3; j++)
	//	scanf("%d",&arr[j]);


	//int max = arr[0];

	//if(max<arr[1])
	//	max = arr[1];
	//if(max<arr[2])
	//	max = arr[2];


	//printf("Max : %d",max);
	//puts("\n");


	puts("=====배열과 for문을 활용해서 정수 열개 입출력하기=====\n");


	int k, b[10];
	
	for(k=0; k<10; k++){
		printf("%d번 정수를 입력하세요 : ",k+1);
		scanf("%d",&b[k]);
	}
		puts("\n");

	puts("입력한 숫자는 다음과 같습니다\n");
	for(k=0; k<10; k++){
		printf("%d번 : %d\n",k+1,b[k]);
	}


}