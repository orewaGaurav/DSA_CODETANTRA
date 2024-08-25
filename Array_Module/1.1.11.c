#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,j,x,ni,pos;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	i=0,j=n-1;
	int flag=0;
	while(i<=j){
		int mid =(i+j)/2;
		if(arr[mid]==x){
			ni=mid;
			flag=1;
			// pos = mid+1;
			break;
		}
		else if(arr[mid]>x){
			j = mid-1;
		}
		else if(arr[mid]<x){
			i=mid+1;
		}
		
	}
	if(flag ==1){
		printf("%d",ni);
	}
	else{
		printf("-1");
	}
}