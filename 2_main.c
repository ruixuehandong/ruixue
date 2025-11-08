//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

int main() {
    int arr[3][3], trans[3][3];
    // 输入原矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            trans[j][i] = arr[i][j]; // 直接转置赋值
        }
    }
    // 输出转置矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
