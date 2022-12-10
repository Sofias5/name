#include <stdio.h>

void max(int a, int b);

int main() {
    int a, b;
    char c;
    if (scanf("%d", &a) != 1 || scanf("%c", &c) != 1 || c != ' ' || scanf("%d", &b) != 1 ||
        scanf("%c", &c) != 1 || c != '\n') {
        printf("n/a");
        return 1;
    } else {
        max(a, b);
    }
    return 0;
}

void max(int a, int b) {
    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
}