#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    char sentence[250];
    printf("Enter a sentence to be reversed: "); 
    fgets(sentence, sizeof sentence, stdin);
    int start = 0, end = strlen(sentence) - 1;
    
    for (int i = 0; i < end; i++)
    {
        char first = sentence[i];
        sentence[i] = sentence[end];
        sentence[end] = first;

        end--;
    }
    
    printf("The reversed sentence is: %s", sentence);

    return 0;
}