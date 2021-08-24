#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *func(void);

int main(void)
{
    char *y;
    
    y = func(); // 関数からアドレスを受け取る
    printf("(2) %s [%p]\n", y, y);
    
    return 0;
}

char *func(void)
{
    char *x, str[5] = "test";
    
    // strlen(str)で文字列strの長さを取得
    x = malloc(strlen(str) + 1);
    
    strcpy(x, str);   // strの内容をxにコピー
    printf("(1) %s [%p]\n", x, x);
    
    // xの先頭アドレスを返す
    return x;
}
