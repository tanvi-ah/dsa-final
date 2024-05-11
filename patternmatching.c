#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
    char P[80]="BAB";
    char T[80]="AABBBABB";
    int R,S,K,L,MAX,INDEX;

    R = strlen(P);
    S = strlen(T);
    MAX = S - R;
    K = 0;

    while(K <= MAX){
        for(L = 0; L < R; L++){
            if(P[L] != T[K + L]){
                break;
            }
        }
        if(L == R){ 
            INDEX = K;
            break;
        }
        else{
            K = K + 1;
        }
    }

    if(K > MAX){
        INDEX = -1;
    }

    printf("P=%s\n", P);
    printf("T=%s\n", T);

    if(INDEX != -1){
        printf("\nIndex of P in T is %d\n", INDEX);
    }
    else{
        printf("\nP doesn't exist in T\n");
    }
    getch();
}
