#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = (int*)malloc(size * sizeof(int));  // �����СΪsize����������

    if (arr == NULL) {
        printf("�ڴ����ʧ�ܣ�\n");
        return 0;
    }
 	int i; 
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;  // ��ʼ������Ԫ��
    }

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // ��ӡ����Ԫ��
    }
    printf("\n");

    free(arr);  // �ͷ��ڴ�

    return 0;
}
