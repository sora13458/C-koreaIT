#include<stdio.h>

void main(){

	int a, b, c;
	int max;

	printf("�� ������ �Է��� �ּ��� : ");
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





	// ================== <���� �ڵ�>===================

	// 1�����(�� Ǯ�̿� ����_������ �ڵ�)
	// ��������� ���� ��¹��� ���� �ʱ� ������ ������ ����ְ� ���� �������� ����ϵ��� �ؾ���
	int a, b, c;
	int max;

	printf("�� ������ �Է��� �ּ��� : ");
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



	//2�����(���� ����Ʈ_���α׷��� �ڵ�)
	int a, b, c, max;
	
	printf("�� ������ �Է��� �ּ��� : ");
	scanf("%d%d%d", &a,&b,&c); 

	max = a;

	if(max < b)
		max = b;
	
	if(max < c)
		max = c;

	printf("Max : %d",max);



	//3�����
	int a, b, c;

	printf("�� ������ �Է��� �ּ��� : ");
	scanf("%d%d%d", &a,&b,&c); 
	
	if(a >= b && a >= c)
		printf("MAX : %d\n", a);
	else if(b >= c)
		printf("MAX : %d\n", b);
	else
		printf("MAX : %d\n", c);

}