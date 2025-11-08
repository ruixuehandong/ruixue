//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

// 计算等差数列和：首项a1，末项an，步长step
int arithmeticSum(int a1, int an, int step) {
    int n = ((an - a1) / step) + 1; // 项数公式
    return n * (a1 + an) / 2; // 等差数列求和公式
}

int main() {
    // 计算1到100的和（首项1，末项100，步长1）
    int result = arithmeticSum(1, 100, 1);
    printf("%d\n", result); // 输出5050
    return 0;
}
