
#include <stdio.h>

int main(void)
{
    int N = 0, A = 900, B = 750, C = 200;
    int a = 1, b = 2, c = 1;
    bool is = false;
    scanf("%d", &N);
    for(a = 1;A*a <= N;a++){
        for(b=2;A*a+B*b<= N;b=b+2){
            for(c=1;A*a+B*b+C*c<= N && (c<a || c<b);c++){
                if (A*a+B*b+C*c == N){
                    printf("%d %d %d\n", a, b, c);
                    is = true;
                }
            }
        }
    }
    if (!is) printf("none");
    return 0;
}
