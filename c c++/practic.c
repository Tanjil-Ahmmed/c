#include<stdio.h>
void arrayRev(int arr[]){
    int temp;
    for(int i=0; i<7/2; i++){
         temp=arr[i];
    arr[i]=arr[6-i];
    arr[6-i]=temp;
      

    }
}
    void arrayPrint(int arr[]){
        int temp;
        for(int i=0; i<7; i++){
            printf(" the value if array %d is %d\n", i,arr[i]);

        }

    }

int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf("\nbefore reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    
    printf(" \nafter reversing the array\n");
    arrayPrint(arr);
return 0;

}