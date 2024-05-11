//String Base operation
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100] = "Tanvir ";
    char s2[100] = "Ahmed";
    int size1 = strlen(s1);
    int size2 = strlen(s2);

    //Length Finding 
    printf("*********Length Finding*********\n");
    printf("The Length is: %d\n", size1);
    printf("The Length is: %d\n", size2);

    //Compare 
    printf("*********Compare*********\n");
    int res;
    res = strcmp(s1,s2);
    if(res == 0){
        printf("Strings are Equal.\n");
    }else{
         printf("Strings are not Equal.\n");
    }

    // Concatenation
    printf("*********Concatenation*********\n");
    printf("My name is: %s\n", strcat(s1, s2));

    // Substring
    printf("*********Substring*********\n");
    char name[15] = "MD TANVIRAHMED";
    char nString[15];
    int pos = 4;
    int len = 6;
    strncpy(nString, name+(pos-1),len);
    nString[len] = '\0';
    printf("%s\n",nString);

    //Copy
    printf("*********Copy*********\n");
    char s3[100];
    strcpy(s3, s2);
    printf("Copy: %s\n",s3);
}