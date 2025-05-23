#include<stdio.h>

int main()
{
    int devidend,divisor;
    scanf("%d/%d", &devidend, &divisor);
    int a =devidend;
    int b = divisor;
    int t;

    while(b>0){
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d/%d", devidend/a, divisor/a);
    return 0;

}