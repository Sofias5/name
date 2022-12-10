#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d %d %d ", sum(a, b), sub(a, b), mul(a, b));
    if (b == 0) {
        printf("n/a");

    } else {
        printf("%d", div(a, b));
    }
        return 0;
    }

    int sum(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    int div(int a, int b) { return a / b; }