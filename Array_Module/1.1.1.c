#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	printf("[");
	for(int i=0;i<n;i++){
		if(i<n-1){
			printf("%d, ",arr[i]);
		}
		else
			printf("%d",arr[i]);
	}
	printf("]");
	for(int i = 1;i<n;i++){
		if(arr[i]>max){
			max = arr[i];}
		}
	printf("\n");
	printf("%d",max);
	return 0;
}
