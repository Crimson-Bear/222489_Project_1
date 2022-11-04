#include <stdio.h>
#include<stdlib.h>

int main(){
    int lastNumber;
    printf("Enter a number: ");
    scanf("%d", &lastNumber);
    for (int i = 1; i <= lastNumber; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}