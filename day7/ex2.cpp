//#include<stdio.h>
//
//void main(){
//
//	int a[10];
//	int max=0,i;
//
//	printf("열가지 정수를 입력받아서 최댓갑을 출력하세요\n");
//
//	for(i=0; i<10; i++){
//		printf("%d 번째 정수를 입력하세요 : ", i+1);
//		scanf("%d",&a[i]);
//	}
//	
//
//	max = a[0];
//
//
//	for(i=0; i<10; i++){
//		if(max < a[i])
//			max = a[i];
//	}
//	printf("최댓값은 : %d", max);
//



//선생님 답(이렇게 하면 입력받ㅇ으면서 비교하기 때문에 더 효율적임)
//int arr[10], i;
//
//	for(i=0; i<10; i++)
//	{
//		printf("[%d]번째 정수 입력 : ", i+1);
//		scanf("%d",&arr[i]);
//		
//		if(arr[0] < arr[i])
//			arr[0] = arr[i];
//	}
//
//	printf("MAX : %d\n", arr[0]);
//

//}