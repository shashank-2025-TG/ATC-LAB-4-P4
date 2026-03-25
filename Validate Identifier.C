#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    int i;

    printf("Enter identifier: ");
    scanf("%s",str);

    if(!(isalpha(str[0]) || str[0]=='_')) {
        printf("Invalid Identifier\n");
        return 0;
    }

    for(i=1; str[i]; i++) {
        if(!(isalnum(str[i]) || str[i]=='_')) {
            printf("Invalid Identifier\n");
            return 0;
        }
    }

    printf("Valid Identifier\n");
}