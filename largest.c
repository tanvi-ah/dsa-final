//Largest Element among arrays

#include<stdio.h>
int main(){
    int arr[] = {1,3,2,8,44,25,46,22,49};
    int b = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    for(int i = 0; i < b, i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The max item is: %d", max);
}