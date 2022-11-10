#include<stdio.h>

void main() {

	int num1;
	int num2;
	char answer;

RE: 

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &num1); 

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &num2); getchar();	

	//1번 코드
	//연산이 두번 들어가는 코드이다 (나머지구하고 0과의 비교)
	if(num1%2 == 0)
		printf("%d는 짝수입니다\n", num1);
	else 
		printf("%d는 홀수입니다\n", num1);

	//2번 코드
	//연산이 한번만 들어가서 1번코드보다 조금 더 효율적이다
	if(num2%2) //C언어는 0을 거짓으로 인식하기 때문에 이 식은 else 로 출력된다.
		printf("%d는 홀수입니다\n", num2);
	else 
		printf("%d는 짝수입니다\n", num2);




	printf("계속하시려면 Y 종료하시려면 아무 키나 눌러주세요");
	answer = getchar();	

	if(answer == 'Y' || answer == 'y')
		goto RE;
	else
		return;
	
}