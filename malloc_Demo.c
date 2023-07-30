#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = (int*)malloc(size * sizeof(int));  // 分配大小为size的整型数组

    if (arr == NULL) {
        printf("内存分配失败！\n");
        return 0;
    }
 	int i; 
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;  // 初始化数组元素
    }

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // 打印数组元素
    }
    printf("\n");

    free(arr);  // 释放内存

    return 0;
}
