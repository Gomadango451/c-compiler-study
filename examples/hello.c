#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int x = add(3, 4);
    printf("%d\n", x);
    return 0;
}
