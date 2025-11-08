//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

// 反转数组元素（输入数组首地址和长度）
void reverseArray(int arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        // 首尾元素交换
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    int len = 5;
    // 输入长度为5的数组
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    // 调用反转函数
    reverseArray(arr, len);
    // 输出反转结果（1后无空格）
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
