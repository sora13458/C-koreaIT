#include<stdio.h>

void main() 
{
	char name[10]; 
	int age;
	char bloodtype;
	char answer;

	RE;

	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	//입력받는 모든 데이터는 함수에 영향을 줌
	//scanf는 \n을 포함하고 있는데 공백,스페이스,엔터는 모두 문자로 인식함
	
	getchar(); //공백과 스페이스 엔터를 배제하고 단일문자를 입력받기위한 함수

	printf("혈액형을 입력하세요 : ");
	scanf("%c", &bloodtype);
	
	getchar();

	printf("이름은 %s, 나이는 %d, 혈액형은 %c입니다\n", name, age, bloodtype);

	answer = getchar();
	
	printf("계속하시겠습니까?(Y/N) => ");

	if(answer == 'y' || answer == 'Y')
		goto RE;
	else
		return;



}