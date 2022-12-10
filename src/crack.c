#include <stdio.h>

int main() {
    double x, y;
    char c;
    if (scanf("%lf", &x) != 1 || scanf("%c", &c) != 1 || c != ' ' || scanf("%lf", &y) != 1 ||
        scanf("%c", &c) != 1 || c != '\n') {
        printf("n/a");
        return 1;
        //  x^2 + y^2 = 25
    } else {
        if (x * x + y * y <= 25) {
            printf("GOTCHA");
        } else {
            printf("MISS");
        }
    }
}