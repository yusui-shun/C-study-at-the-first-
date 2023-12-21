#include<malloc.h>
int main(){
	char *p,*q;
	p=(char*)malloc(10);
	q=p;
	p=(char*)realloc(q,20);
} 
