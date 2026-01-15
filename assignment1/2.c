#include <stdio.h>

int main() {
    int n;

    printf("Enter buffer size: ");
    scanf("%d", &n);

    int buffer[n];
    int value;

    printf("Enter %d initial data:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &buffer[i]);
    }

    printf("The initial buffer is:");
     for (int i = 0; i < n; i++) {
        printf("%d", buffer[i]);
    }
printf("\n");

    printf("Enter new valueo:\n ");
    scanf("%d", &value);

    for (int i = n - 1; i > 0; i--) {
        buffer[i] = buffer[i - 1];
    }

    buffer[0] = value;

    printf("Stored data: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", buffer[i]);
    }

    return 0;
}
