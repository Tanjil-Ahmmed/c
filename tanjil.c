#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("data.text", "r");
    int c;
    int cCounter=0, vCounter=0,sCounter=0;
    while(1){
        c=fgetc(fp);
        if(c==EOF){
            break;
        }
        if(c==32 ||c==10){
            sCounter++;
        }else if(c=='a' || c=='e' || c=='i'||c=='o'||c=='u'){
            vCounter++;

        }else if(c=='A' || c=='E' || c=='I'||c=='O'||c=='U'){
            vCounter++;
        }else{

        }

    }
    printf("vowels :%d\n", vCounter);
    printf("consonant:%d\n", cCounter);
    printf("space and newline:%d\n", sCounter);

return 0;



}