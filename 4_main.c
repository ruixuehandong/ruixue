//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>
int main() {
    int i = 100, bai, shi, ge;
    // While循环遍历三位数
    while (i <= 999) {
        bai = i / 100;
        shi = i / 10 % 10;
        ge = i % 10;
        if (bai * bai * bai + shi * shi * shi + ge * ge * ge == i) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\b");
    return 0;
}
