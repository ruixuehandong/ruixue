//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>
int main() {
    int n, i = 3, is_prime = 1;
    scanf("%d", &n);
    if (n == 1) is_prime = 0;
    else if (n == 2) is_prime = 1;
    else if (n % 2 == 0) is_prime = 0;
    // While循环替代For循环，判断奇数因子
    while (i * i <= n && is_prime) {
        if (n % i == 0) is_prime = 0;
        i += 2;
    }
    if (is_prime) printf("密钥安全，密码设置成功\n");
    else printf("密钥不安全，请重新输入\n");
    return 0;
}
