//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>
int main() {
    int arr[5], i, sum = 0;
    // 输入前四位并计算和
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    arr[4] = sum;
    // 输出完整数组
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\b");
    return 0;
}
