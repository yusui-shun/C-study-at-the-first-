#include<stdlib.h>
#include<stdio.h>
int main(){
	int *p;
	p=(int*)malloc(sizeof(int));
	*p=100;
	printf("�ڴ��ַ��%d,Ԫ����%d",p,*p);
	free(p);
	return 0;
}
