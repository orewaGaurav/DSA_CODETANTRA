#include <stdio.h>
int main(){
	int elements=0;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c=='\n'){
			break;
		}
	}
	for(int i =0;i<n-1;i++){
		for(int j = 0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	if(n==elements){
		for(int i =0;i<n;i++){
			if(i<n-1){
				printf("%d ",arr[i]);
			}
			else{
				printf("%d",arr[i]);
			}
		}
	}
	else{
		printf("-1");
	}
}