#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    if (6 <= t && t <= 11) {
        printf("早上好\n");
    } else if (12 <= t && t <= 13) {
        printf("中午好\n");
    } else if (14 <= t && t <= 18) {
        printf("下午好\n");
    } else printf("晚上好\n");

    return 0;
}