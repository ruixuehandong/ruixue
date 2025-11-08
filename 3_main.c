//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

int main() {
    int arr[10];
    // 输入10个数字
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    // 冒泡排序核心逻辑
    for (int i = 0; i < 9; i++) { // 排序轮次
        for (int j = 0; j < 9 - i; j++) { // 每轮比较次数
            if (arr[j] > arr[j+1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // 输出排序结果
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
