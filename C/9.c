#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int c;
    scanf("%d", &c);
    int sign = 1;
    int x = 1;
    for(int i = 1; i<=c; i++){
        x = x*(sign*i);
        sign = -sign;
    }
    printf("%d\n", x);
    return 0;
}