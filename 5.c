#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = "We are best friends.";
    
    int total_count = 0;     
    int lowercase_count = 0; 
    int i = 0;

    while (ptr[i] != '\0') {

        total_count++;

        if (ptr[i] >= 'a' && ptr[i] <= 'z') {
            lowercase_count++;
        }

        i++; 
    }

    printf("字串內容: %s\n", ptr);
    printf("(a) 總字元數 (不含結束字元): %d 個\n", total_count);
    printf("(b) 小寫字母的字元數: %d 個\n", lowercase_count);

    printf("\n");
    system("pause");
    return 0;
}