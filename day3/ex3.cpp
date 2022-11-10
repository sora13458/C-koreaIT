#include<stdio.h>

void main(){

	//위아래 같은 결과 출력됨
	//1번: 나머지가 1or 0인 경우//2번: 나머지가 1or 0인 경우

	int a;
	

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &a);
	
	int	a2 = a%2;

	switch(a2)
	{
		case 0 : printf("%d 는 짝수입니다\n" , a2); break;

		case 1 : printf("%d 는 홀수입니다\n" , a2);

	}


	//2번: 나머지가 1or 0인 경우//2번: 나머지가 1or 0인 경우
	int b;
	

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &b);

	switch(b%2)
	{
		case 0 : printf("%d 는 짝수입니다\n" , b); break;

		case 1 : printf("%d 는 홀수입니다\n" , b);

	}


	//3번: 나머지가 0인 것에 대해 참과 거짓 판별
	int c;
	

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &c);

	switch(c%2 == 0)
	{
		case 0 : printf("%d 는 홀수입니다\n" , c); break;

		case 1 : printf("%d 는 짝수입니다\n" , c);

	}


}