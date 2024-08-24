#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int count = 0;
	for(int i = 0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]=temp;
				count = 1;
			}
		}
	}
	if(count == 0 ){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	return 0;
}
