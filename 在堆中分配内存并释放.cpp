#include<stdlib.h>
#include<stdio.h>
int main(){
	int *p;
	p=(int*)malloc(sizeof(int));
	*p=100;
	printf("内存地址是%d,元素是%d",p,*p);
	free(p);
	return 0;
}
