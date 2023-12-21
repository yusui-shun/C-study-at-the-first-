#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *str=NULL;
	str=(char*)calloc(10,sizeof(char));
	strcpy(str,"Hello1234566");
	printf("±‰¡ø «%s\n",str);
	free(str);
	return 0;
}
