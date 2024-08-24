#include <stdio.h>
int main(){
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int z=0,nz=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]!=0){
				nz++;
			}
			else{
				z++;
			}
		}
	}
	if(nz>z){
		printf("False\n");
	}
	else{
		printf("True\n");
		int spars[nz][3],k=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(arr[i][j]!=0){
					spars[k][0]=i;
					spars[k][1]=j;
					spars[k][2]=arr[i][j];
					k++;
				}
			}
		}
		for(i=0;i<nz;i++){
			for(j=0;j<3;j++){
				if(j<2){
					printf("%d ",spars[i][j]);
				}
				else{
					printf("%d\n",spars[i][j]);
				}
			}
		}
	}
	return 0;
}