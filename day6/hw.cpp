#include<stdio.h>

void main(){
	

	puts("=====<while�� ������ ����>=====\n");
	int a=2, b;
	
	while(a<= 9){
		b=1;
		while(b<=9){
			printf("%3d*%d =%-2d", a,b,a*b);
			b++;
		
		}
		a++;
		puts("");
	}puts("");



	puts("=====<while�� ������ ����>=====\n");
	int i=1, j;

	while(i<= 9){
		j=2;
		while(j<=9){
			printf("%3d*%d =%-2d", j,i,i*j);
			j++;
		
		}
		i++;
		puts("");
	}puts("");




	puts("=====<do-while�� ������ ����>=====\n");
	int x=2, y;

	do{
		y = 1;
		puts("");
			
		do{			
			printf("%3d*%d =%-2d", x,y,x*y);
			y++;
		}while(y<= 9);
		
		x++;			
	}while(x<= 9);
	puts("");





	puts("");
	puts("=====<do-while�� ������ ����>=====\n");

	int f=1, s;

	do{
		s = 2;
		puts("");
		do{			
			printf("%3d*%d =%-2d", s,f,f*s);
			s++;
		}while(s<= 9);
		f++;	
	}while(f<= 9);
	puts("");
	puts("");
	



}