#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int arr[5] = {31, 17, 33, 22, 16};

    int *ptr = arr; 

    printf("--- 處理前的陣列 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++) {
      
        *(ptr + i) = *(ptr + i) + 10;
    }

 
    printf("--- 加上 10 之後 ---\n");
    for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
    }
    printf("\n\n");

    system("pause");
    return 0;
}