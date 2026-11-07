#include <stdio.h>


int main() {

    int x = 100;
    printf("水仙花数有：");
    for(; x < 1000; x++) {
        int a = x / 100, b = (x / 10) % 10, c = x % 10;
        int m = a*a*a + b*b*b + c*c*c;
        if (x == m){
            printf("%d ", x);
        }
    }
    printf("\n");
    return 0;
}
