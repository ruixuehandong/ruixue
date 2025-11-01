//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>
int main() {
    int arr[5], i, num;
    for (i = 0; i < 5; i++) {
        // 循环输入，直到获取偶数
        do {
            scanf("%d", &num);
        } while (num % 2 != 0);
        arr[i] = num;
    }
    // 输出全偶数组
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\b");
    return 0;
}
