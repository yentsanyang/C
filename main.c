#include <stdio.h>
#include <stdlib.h>
void count(int *p) {
    
    *p = *p + 1; 
}

int main() {
int num = 0; 

    printf("一開始，num 的值為: %d\n\n", num);

    count(&num);
    printf("呼叫第 1 次後，num 的值變為: %d\n", num);

    count(&num);
    printf("呼叫第 2 次後，num 的值變為: %d\n", num);

    count(&num);
    printf("呼叫第 3 次後，num 的值變為: %d\n\n", num);

    system("pause");
    return 0;
}