#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double dividend,divisor;
    double t;
    int i;
    double sum = 0.0;

    for(i=1 ; i<=n ; i++){
        sum += dividend / divisor;
        t = dividend;
        dividend = t + divisor;
        divisor = t;
    }
    printf("%.2f", sum);

    return 0;
}