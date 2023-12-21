#include<stdio.h>
int main(){
	int i=5,j=7;
	scanf("%d",&i);
	if(i%2==0){
		printf("%d\n",i);
	}
	else{
		i=(i|1)+1;
		printf("变化后的%d\n",i);
	}
	return 0;
} 
