#include <stdio.h>
int main() {
    int n, i, is_prime = 1;
    scanf("%d", &n);
    // 1不是质数，2是最小质数，大于2的偶数不是质数
    if (n == 1) is_prime = 0;
    else if (n == 2) is_prime = 1;
    else if (n % 2 == 0) is_prime = 0;
    // 遍历3到n-1的奇数判断是否能整除n
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) printf("密钥安全，密码设置成功\n");
    else printf("密钥不安全，请重新输入\n");
    return 0;
}
