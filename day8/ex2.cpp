#include<stdio.h>

// return 이 있는 함수 
/*
int func(int a, int b){

	int sum;
	sum = a + b;
	return sum;

}
void main(){

	int a, b, sum;
	printf("a 값 : "); scanf("%d",&a);
	printf("b 값 : "); scanf("%d",&b);

	sum = func(a,b);
	printf("%d + %d = %d", a, b, sum);

}

*/
// return 이 없는 함수
void func2(int a2, int b2){

	int sum2 = a2 + b2;
	printf("%d + %d = %d", a2, b2, sum2);
}
void main(){

	int a2,b2;
	printf("a2 값 : "); scanf("%d",&a2);
	printf("b2 값 : "); scanf("%d",&b2);
	func2(a2,b2);

}