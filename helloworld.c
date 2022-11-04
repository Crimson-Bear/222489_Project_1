#include <stdio.h>
#include<stdlib.h>

int main(){
    char name[16];
    printf("Enter your name: ");
    fgets(name, 16, stdin);
    printf("%s, Hello World!", name);
    
    return 0;
}