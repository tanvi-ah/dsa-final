//Binary seach in c
#include<stdio.h>
int main(){
    int a[] = {1,3,2,8,44,25,46,22,49};
    int b = sizeof(a)/sizeof(a[0]);
    int Search = 46;
    int left, middle, right;
    left = 0;
    right = b - 1;
    while(left<=right){
        middle = (left + right) / 2;
        if(a[middle] == Search){
            printf("Item found at index: %d", middle);
            return 0;
        }else if(a[middle] < Search){
            left = middle + 1;
        }else{
            right = middle - 1;
        }
    }
    printf("Item not found!");
    return 0;
}