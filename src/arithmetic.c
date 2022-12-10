#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a;
    int b;
    if (int i= 0; i++; i--) {
        scanf("%d %d", &a, &b);
        printf("%d %d %d ", sum(a, b), sub(a, b), mul(a, b));
        if (b == 0) {
            printf("n/a");

        } else {
            printf("%d", div(a, b));
        }
        while ((scanf("%d", &a)) != 1) {
            printf("n/a");
            while (getchar() != '\n')
                ;
        }
        while ((scanf("%d", &b)) != 1) {
            printf("n/a");
            while (getchar() != '\n')
                ;
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }