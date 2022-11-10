#include<stdio.h>

void main(){

	int a, b, c;
	int max;

	printf("세 정수를 입력해 주세요 : ");
	scanf("%d%d%d", &a,&b,&c); 

	if(a>b)
		if(a>c){
			max = a;
			printf("Max : %d",max);
		}else{
			max = c;
			printf("Max : %d",max);
		}
	
	else if(b>a)
		if(b>c){
			max = b;

		}else{
			max = c;
			printf("Max : %d",max);
		}
	
	else if(c>a)
		if(c>b){
			max = c;
			printf("Max : %d",max);
		}
		else{
		max = b;
		printf("Max : %d",max);
		}





	// ================== <정답 코드>===================

	// 1번방식(내 풀이와 동일_정리된 코드)
	// 제어문에서는 보통 출력문을 달지 않기 때문에 변수에 담아주고 가장 마지막에 출력하도록 해야함
	int a, b, c;
	int max;

	printf("세 정수를 입력해 주세요 : ");
	scanf("%d%d%d", &a,&b,&c); 

	if(a>b)
		if(a>c)
			max = a;
		else
			max = c;
			
	else if(b>c)
		max = b;

	else
		max = c;
		

		printf("Max : %d",max);



	//2번방식(가장 베스트_프로그래머 코드)
	int a, b, c, max;
	
	printf("세 정수를 입력해 주세요 : ");
	scanf("%d%d%d", &a,&b,&c); 

	max = a;

	if(max < b)
		max = b;
	
	if(max < c)
		max = c;

	printf("Max : %d",max);



	//3번방식
	int a, b, c;

	printf("세 정수를 입력해 주세요 : ");
	scanf("%d%d%d", &a,&b,&c); 
	
	if(a >= b && a >= c)
		printf("MAX : %d\n", a);
	else if(b >= c)
		printf("MAX : %d\n", b);
	else
		printf("MAX : %d\n", c);

}