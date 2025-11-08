//202510306225
//3272281276@qq.com
//邓鑫瑞
#include <stdio.h>

// 计算数组所有元素的和
int arraySum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

// 计算数组所有元素的积
int arrayProduct(int arr[], int len) {
    int product = 1;
    for (int i = 0; i < len; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    int len = 5;
    // 输入长度为5的数组
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    // 调用函数并输出结果
    int sum = arraySum(arr, len);
    int product = arrayProduct(arr, len);
    printf("%d %d\n", sum, product);
    return 0;
}
