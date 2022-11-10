#include<stdio.h>

void main() {

	int input;

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &input);


	if(input > 0)
		printf("%d의 절대값은 : %d\n",input,input);
	else if(input < 0)
		printf("%d의 절대값은 : %d\n",input, -input);
	else
		printf("%d 는 : %d" , input);
	

	//위 코드와 동일한 코드


	int i;

	printf("한 정수를 입력하세요 : ");
	scanf("%d", &i);
	printf("%d의 절대값은 : ",i);


	if(input < 0){
		i = -i;
		printf("%d의 절대값은 : %d\n",-i,i);
	}







}