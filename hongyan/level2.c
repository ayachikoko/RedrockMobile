#include <stdio.h>

int main () {
    printf("请输入一个在(1,9)的数字 ");
    int x;
    scanf("%d", &x);
    
    for(int a = 1; a <= x; a++){
        for(int b = 1;b <= a; b++){
            printf("%d*%d=%d ", b, a, a*b);
        }
        printf("\n");
    }
    return 0;
}
