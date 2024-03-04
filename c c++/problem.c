#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(20);
    if(ptr==NULL){
        printf("memory not allocated");
    }else{
        printf("memory allocated sucessfully.\n");

    }
    return 0;
}
