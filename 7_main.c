//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>
int main() {
    int arr[5] = {0}, i;
    // 输入前四位（存储在arr[0]-arr[3]）
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    // 元素整体后移一位（arr[0]→arr[1]，…，arr[3]→arr[4]）
    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0; // 首位补0
    // 输出更新后数组
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\b");
    return 0;
}
