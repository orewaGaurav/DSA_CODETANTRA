#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("[");
	for(int i=0;i<n;i++){
		if(i<n-1){
			printf("%d, ",arr[i]);
		}
		else
			printf("%d]\n",arr[i]);
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	printf("%d",sum);
	return 0;
}