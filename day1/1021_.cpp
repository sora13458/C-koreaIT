#include <stdio.h>

void main()
{
	int a, b, c, d, e, f;
	
	

	printf("시간당 임금 :");
	scanf_s("%d", &a);

	printf("근 무 시 간 : ");
	scanf_s("%d", &b);

	printf("근 무 일 수 : ");
	scanf_s("%d", &c);

	printf("세       금 : ");
	scanf_s("%d", &d);

	e = a*b*c;
	f = e/d;

	printf("==============================\n");
	
	printf("월       급 : %d", &e);
	printf("실 수 령 액 : %d", &f);
	
	printf("==============================\n");
}