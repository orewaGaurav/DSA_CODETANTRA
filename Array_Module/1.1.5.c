#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int k;
	int count=0;
	scanf("%d",&k);
	for(int i = 0;i<n;i++){
		if(arr[i]==k){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
