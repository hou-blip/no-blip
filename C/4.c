#include <stdio.h>
 
int main()
 {
	int a;
	scanf("%d", &a);
	int b,c,d;
	int cnt = 0;
	
	b = a;
	while(b<=a+3){
		c = a;
		while(c<=a+3){
			d = a;
			while(d <= a+3){
				if(b != c&&b != d&&c != d){
						cnt ++;
						printf("%d%d%d", b, c, d);
						if(cnt == 6){
							printf("\n");
							cnt = 0;
						}else{
							printf(" ");
						}
				}
				d ++;
			}
			c ++;
		}
		b ++;
	}

 	return  0;
 }
