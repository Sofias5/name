#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a, b;
    char c;
    if (scanf("%d", &a) != 1 || scanf("%c", &c) != 1 || c != ' ' || scanf("%d", &b) != 1 ||
        scanf("%c", &c) != 1 || c != '\n') {
        printf("n/a");
        return 1;
    } else {
        printf("%d %d %d ", sum(a, b), sub(a, b), mul(a, b));
        if (b == 0) {
            printf("n/a");
        } else {
            printf("%d", div(a, b));
        }
    }
    return 0;
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }