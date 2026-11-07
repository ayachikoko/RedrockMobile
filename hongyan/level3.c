#include <stdio.h>
//成功在AI大大的帮助下完成了

int main() {
    int a[7];                   //定义的变量有 a[0] ~ a[6]
    int i;
    for(i = 0;i < 7;i++)
    scanf("%d,", &a[i]);
    int m, n;
    for(i = 0;i < 6; i++)       //与下面这个组合起来
    for(m = 0;m < 6 - i; m++)   //保证最后（[6]-->[5]...)一位最小
    if (a[m] < a[m + 1]){
        n = a[m];               //先存储进入n备份
        a[m] = a[m + 1];        //比较过后，如果小于后一位，那么大的就往前
        a[m + 1] = n;           //然后再将小的备份的存到后一位
    }

    for (i = 0; i < 7; i++)
    printf("%d ", a[i]);
    return 0;
}