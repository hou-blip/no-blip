#include <stdio.h>
#include <math.h>

int CAUCAMT();
int main()
{
    CAUCAMT();
    int a;
    scanf("%d", &a);
    if(a==1){
        int b;
        scanf("%d", &b);
        int sum = 0;
        while(b > 0){
            int isPrime = 1;
            if(b<2){
                isPrime = 0;
            }else{
                for(int i = 2;i*i<=b;i++){
                    if(b%i == 0){
                    isPrime = 0;
                    break;
                    }
                }
            }
            if(isPrime == 1){
                sum += b;
            }
            b --;
        }
        printf("%d\n", sum);
        return 0;

    }else if(a==2){
        int c;
        scanf("%d", &c);
        int sign = 1;
        int x = 1;
        for(int i = 1; i<=c; i++){
            x = x*(sign*i);
            sign = -sign;
        }
        printf("%d\n", x);
    }else if(a==4){
            int count = 0;
            int number[5];
            for(int i = 0;i<5; i++)
            {
                scanf("%d", &number[i]);
            }
            int d;
            scanf("%d", &d);
            int found = 0;
            for(int i = 0; i<5 ; i++)
            {
                if(number[i] == d){
                    printf("%d在第%d个位置上\n", d, i+1);
                    found = 1;
                    break;
                }      
            }
            if(!found){
                printf("不存在\n");
            } 
    }
        return 0;
}

int CAUCAMT() {
    int a;
    scanf("%d", &a);
    if(a=3){
        int n;
        scanf("%d", &n);
        int sum = 0;
        int mask = 1;
        int t = abs(n);
        int d = t;
        while(t>1){
            t /= 10;
            mask *= 10;
        }
        do{
            int m = d / mask;
            d %= mask;
            mask /= 10;
            sum += m;
        }while(mask>0);
        printf("%d", sum);
        }
        return 0;
}
