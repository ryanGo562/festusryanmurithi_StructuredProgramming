#include <stdio.h>


void incrementByValue(int n) {
    n = n + 1;
}


void incrementByReference(int *ptr) {
    *ptr = *ptr + 1;
}

int main() {
    int count = 10;

    printf("Initial value: %d\n", count);


    incrementByValue(count);
    printf("After incrementByValue: %d (No change)\n", count);


    incrementByReference(&count);
    printf("After incrementByReference: %d (Incremented)\n", count);

    return 0;
}
