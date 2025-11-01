#include <stdio.h>
int main() {
    int i, bai, shi, ge;
    // 遍历所有三位数
    for (i = 100; i <= 999; i++) {
        bai = i / 100;    // 提取百位
        shi = i / 10 % 10;// 提取十位
        ge = i % 10;      // 提取个位
        // 判断是否满足水仙花数条件
        if (bai * bai * bai + shi * shi * shi + ge * ge * ge == i) {
            printf("%d ", i);
        }
    }
    // 移除最后一个空格（优化输出格式）
    printf("\b");
    return 0;
}
