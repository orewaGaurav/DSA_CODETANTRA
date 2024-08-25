#include <stdio.h>
int main(){
	int n,i,j,elements =0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c =='\n'){
			break;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			else{
				continue;
			}
		}
	}
	if(n==elements){
		for(i=0;i<n;i++){
			if(i<n-1){
				printf("%d ",arr[i]);
			}
			else{
				printf("%d\n",arr[i]);
			}
		}
	}
	else{
		printf("-1");
	}
}