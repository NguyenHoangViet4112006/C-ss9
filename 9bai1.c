#include <stdio.h>

int main(){
	int index=0;
	int arr [100]= {1,2,3,4,4,9,4,5,6};
	int num=0;
	
	printf("nhap vi tri muon chen ");
	scanf("%d", &index);
	printf("nhap so muon chen ");
	scanf("%d", &num);
	
	for (int i= 8; i< index; i--){
		arr[i]= arr[i-1];
	}
	arr[index]=num;
	for(int i = 0; i<9;i++){
		printf("%d ", arr[i]);
		
	}
	return 0;
}
