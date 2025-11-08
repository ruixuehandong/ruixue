//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

// 计算a的b次幂（b为非负整数）
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    // 计算1²+2²+3²+4²+5²
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += power(i, 2);
    }
    printf("%d\n", sum); // 输出55
    return 0;
}
