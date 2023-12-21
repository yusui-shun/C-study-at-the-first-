#include<stdio.h>
int change(int num);
int main(){
    int num=0;
    printf("Invalid input.\n");
    scanf("%d",&num);
    for (int i=0;i<num ;i++){
        for(int j=0;j<num;j++){
            int A[j];
        if(change(i)==0){
            A[j]=i;
        }
    }
    return 0;
}
int change(int num){
    for (int i=2; i<num/2; i++){
        if( num%i == 0 ){
            return 1;
        }
    }
    return 0;
}