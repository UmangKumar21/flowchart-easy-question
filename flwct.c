#include<stdio.h>
int main(){
	int N,ctr,val;
	ctr=0,val=1;
	scanf("%d",&N);
	while(val<=N){
		val*=10;
		ctr++;
	}
	printf("%d",ctr);
}