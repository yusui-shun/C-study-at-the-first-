#include<stdio.h>
int main(){
	int i=5,j=7;
	//5->00000101
	//7->00000111
	int k;
	k=i|j;
	printf("%d",k);
	return 0;
} 
