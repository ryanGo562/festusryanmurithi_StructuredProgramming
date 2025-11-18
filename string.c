#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    scanf("%s", name);

    int length = strlen(name);

    printf("You entered: %s\n", name);
    printf("Length of the string: %d\n", length);

    return 0;
}
