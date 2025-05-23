#include <stdio.h>

double P(int n,double x)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else if(n>1){
        return ((2*n-1)*x-P(n-1,x)-(n-1)*P(n-2,x))/n;
    }
}

int main()
{
    double x;
    int n;
    scanf("%lf%d", &x, &n);
    printf("%.2f", P(n,x));
    return 0;
}

