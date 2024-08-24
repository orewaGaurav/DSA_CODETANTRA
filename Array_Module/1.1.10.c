#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,k,l,count=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(arr[i]==k){
			l=i;
			count =1;
			break;
		}
	}
	if(count==1){
		printf("%d",l);
	}
	else{
		printf("Not found");
	}
}