#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double x1, x2;
    printf("Value of 'a': ");
    scanf("%lf", &a);
    printf("value of 'b': ");
    scanf("%lf", &b);
    printf("Value of 'c': ");
    scanf("%lf", &c);
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/ 2*a;
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/ 2*a;

    printf("The roots of the quadratic equation %.2lfx2 + %.2lfx + %.2lf are %.2lf and %.2lf", a, b, c, x1, x2);

    return 0;
}