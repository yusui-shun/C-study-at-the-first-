#include<stdio.h>
#include<malloc.h>
#define Max 100000000
int main(){
	int *a[Max]={NULL};
	int i;
	for(i=0;i<Max;i++){
		a[i]=(int*)malloc(Max);
	}
	return 0;
} 
