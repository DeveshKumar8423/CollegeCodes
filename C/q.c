//program to convert given string in upper case 
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i; 

    printf("Enter a string: ");
    gets(str);

    for(i=0 ; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
    }

    printf("The string in upper case is: %s", str);
    return 0;
}