#include <stdio.h>

int combi(int, int);

int main(void){
	int n;
	int r;
	
	for(n=0;n<=5;n++){
		for(r=0;r<=n;r++)
			printf("%d C %d=%d", n,r,combi(n,r));
		printf("\n");
	}
}
int combi(n,r){
int p=1;
int i;
	for(i=1;i<=r;i++)
		p=p*(n-i+1)/i;
	
	return p;
}
