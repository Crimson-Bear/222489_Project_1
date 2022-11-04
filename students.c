#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i;
    int j = 10;
    char students[j][50];
    for(i = 0; i < j ; i++)
    {
        printf("Student %d: ", i+1);
        scanf("%s", students[i]);
    }

    printf("The names are ");
    for ( i = 0; i < j; i++)
    {
        printf("%s, ", students[i]);
    }
    

    return 0;
}