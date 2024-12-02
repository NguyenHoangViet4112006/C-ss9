#include <stdio.h>

int main(){
	int index;
	int num;
	int arr[5]={1,2,3,4,5};
	printf("nhap vi tri can sua ");
	scanf("%d", &index);
	printf("nhap gia tri can sua ");
	scanf("%d", &num);
	
	arr[index]=num;
	for(int i = 0; i<5; i++){
		printf("%d ", arr[i]);
	}
	
	
	return 0;
} 
