//Linear Search in c.
#include<stdio.h>
int main(){
    int arr[] = {1,3,2,8,44,25,46,22,49};
    int b = sizeof(arr)/sizeof(arr[0]);

    int Search = 25;

    for(int i = 0; i< b; i++){
        if(arr[i] == Search){
            printf("Search item index: %d", i + 1);
        }
    }
}