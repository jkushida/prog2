#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE * fp = NULL;

    fp = fopen("output.txt", "w");
    if(fp == NULL){  // エラー処理
        printf("ファイルオープン失敗\n");
        exit(EXIT_FAILURE);  // エラーなら強制終了
    }

    fputs("Hello\n", fp);   // オープンしたファイルに書き込み

    fclose(fp);

    return 0;
}
