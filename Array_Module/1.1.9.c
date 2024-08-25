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
	int nm =r*c;
	int nz=0,z=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]==0){
				z++;
			}
			else{
				nz++;
			}
		}
	}
	int spp[nz][3];
	int k=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(arr[i][j]!=0){
					spp[k][0]=i;
					spp[k][1]=j;
					spp[k][2]=arr[i][j];
					k++;
				}
			}
		}
	if(nz==0){
		printf("-1");
	}
	else if(z>nz){
		for(int i=0;i<nz;i++){
			printf("%d %d %d\n",spp[i][0],spp[i][1],spp[i][2]);
		}
	}
	else{
		printf("-1");
	}
}