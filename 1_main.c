//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

int main() {
    int arr[3][3];
    // 输入3*3矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // 原样输出
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
