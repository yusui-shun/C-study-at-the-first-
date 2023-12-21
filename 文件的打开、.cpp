#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1;
	if((fp1=fopen("C:\\file1.txt", "r"))==NULL){
		printf("失败了\n");
		exit(0z);
	}
	else{
		printf("你成功了\n");
	}
	return 0;
} 
