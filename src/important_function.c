#include <math.h>
#include <stdio.h>
// y = 7e-3 * x^4 + ((22.8 * x^⅓ - 1e3) * x + 3) / (x * x / 2) - x * (10 + x)^(2/x) - 1.01.
int main() {
    double x;
    char c;
    if (scanf("%lf", &x) != 1 || scanf("%c", &c) !=1 || c != '\n') {
        printf("n/a");
        return 1;
    } else {
        double y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1 / 3) - 1e3) * x + 3) / (x * x / 2) -
                   x * pow((10 + x), (2 / x)) - 1.01;
        printf("%.1lf", y);
    }
    return 0;
}