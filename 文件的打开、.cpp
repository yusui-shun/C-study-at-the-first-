#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1;
	if((fp1=fopen("C:\\file1.txt", "r"))==NULL){
		printf("ʧ����\n");
		exit(0z);
	}
	else{
		printf("��ɹ���\n");
	}
	return 0;
} 
