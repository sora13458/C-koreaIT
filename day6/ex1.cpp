#include<stdio.h>

void main(){

	//puts("=====�μ��� ���� �迭�� ��Ÿ����=====\n");
	//int i, a[3];

	//printf("ù��° ������ �Է��ϼ��� : ");
	//scanf("%d",&a[0]);
	//printf("�ι�° ������ �Է��ϼ��� : ");
	//scanf("%d",&a[1]); 

	//a[2] = a[0] + a[1];

	//for(i=0; i<3; i++)
	//	printf("%3d",a[i]);

	//puts("\n");



	//puts("=====�迭�� ���� �� ������ �Է¹ް� �ִ밪 ���ϱ�=====\n");


	//int j, arr[3];
	//
	//puts("�� ������ �Է��ϼ��� :");

	//for(j=0; j<3; j++)
	//	scanf("%d",&arr[j]);


	//int max = arr[0];

	//if(max<arr[1])
	//	max = arr[1];
	//if(max<arr[2])
	//	max = arr[2];


	//printf("Max : %d",max);
	//puts("\n");


	puts("=====�迭�� for���� Ȱ���ؼ� ���� ���� ������ϱ�=====\n");


	int k, b[10];
	
	for(k=0; k<10; k++){
		printf("%d�� ������ �Է��ϼ��� : ",k+1);
		scanf("%d",&b[k]);
	}
		puts("\n");

	puts("�Է��� ���ڴ� ������ �����ϴ�\n");
	for(k=0; k<10; k++){
		printf("%d�� : %d\n",k+1,b[k]);
	}


}