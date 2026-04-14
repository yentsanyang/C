#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int main(void) {
    struct data {
        char name[10];
        int math;
    } student[MAX] = {
        {"Jenny", 63},
        {"Teresa", 88},
        {"Kimi Chen", 57},
        {"Lily Kao", 92},
        {"David", 48}
    };

    int i;
    int max_idx = 0;    
    int total_sum = 0;  

    for (i = 0; i < MAX; i++) {
        
        if (student[i].math > student[max_idx].math) {
            max_idx = i;
        }
        total_sum += student[i].math;
    }
    printf("(a) 成績最高分的學生是: %s，分數為: %d\n", 
           student[max_idx].name, stu
    printf("(b) 不及格的學生名單:\n");
    for (i = 0; i < MAX; i++) {
        if (student[i].math < 60) {
            printf("    姓名: %s, 分數: %d\n", student[i].name, student[i].math);
        }
    }

    double average = (double)total_sum / MAX;
    printf("(c) 成績的平均值為: %.2f\n", average);

    printf("\n");
    system("pause");
    return 0;
}