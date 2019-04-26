#include<stdio.h>

int main(){
    int c1, c2, q1, q2;
    double v1, v2, total_pagar;
    scanf("%d %d %lf", &c1, &q1, &v1);
    scanf("%d %d %lf", &c2, &q2, &v2);
    total_pagar = (q1 * v1) + (q2 * v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total_pagar);

    return 0;
}
