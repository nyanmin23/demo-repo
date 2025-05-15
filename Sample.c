#include <stdio.h>

int main(void) 
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    printf("Line: %s", line);
}