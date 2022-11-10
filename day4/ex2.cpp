#include<stdio.h>
#include<conio.h>

void main(){

 //1-100까지의 합을 순차적으로 구해라

	int i,a;
	int sum = 0;

	for(i=1;i<=100; i++)
	{
		if(i%10 == 0)
		{
			puts("========================");
		}
	sum += i;
	printf("%d 회의 합은 : %d\n",i, sum);
	}


}   