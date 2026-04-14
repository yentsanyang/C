#include <stdio.h>
#include <stdlib.h>
struct time {
    int hour;
    int minutes;
    double second;
};
struct date {
    int year;
    int month;
    int day;
    struct time t; 
};

int main() {
    
    struct date now = {2026, 4, 7, {23, 10, 35.00}};

    printf("%02d/%02d/%04d  %02d:%02d:%05.2f\n\n", 
           now.month, now.day, now.year, 
           now.t.hour, now.t.minutes, now.t.second);

    printf("--- (d) 結構大小分析 ---\n");
    
    printf("理   論   大   小 : 28 bytes\n");
    
    printf("sizeof(now) 實際大小 : %zu bytes\n", sizeof(now));
    
    printf("\n[分析補充]：\n");
    printf("如果實際大小顯示為 32 bytes 而不是 28 bytes，是因為編譯器進行了記憶體對齊。\n");
    printf("電腦為了讀取效能，會自動在記憶體中間塞入一些空白的 padding 來補齊 8 的倍數。\n\n");

    system("pause");
    return 0;
}